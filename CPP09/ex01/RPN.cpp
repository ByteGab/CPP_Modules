/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:28:05 by gafreire          #+#    #+#             */
/*   Updated: 2026/07/17 12:55:10 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>

RPN::RPN()
{
    
}

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
        this->_stack = other._stack;
    return (*this);
}

RPN::~RPN()
{
    
}

int RPN::evaluate(const std::string &expression)
{
    while (!_stack.empty())
        _stack.pop();
    std::istringstream iss(expression);
    std::string token;
    while (iss >> token)
    {
        if (token.length() == 1 && isOperator(token[0]))
        {
            if (_stack.size() < 2)
                throw std::invalid_argument("Invalid expression");
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(applyOp(token[0], a, b));
        }
        else
        {
           if (token.length() > 1 || !isDigit(token[0]))
                throw std::invalid_argument("Invalid expression");
            _stack.push(token[0] - '0');
        }
    }
    
    if (_stack.size() != 1)
        throw std::invalid_argument("Invalid expression");
    return (_stack.top());
}

bool RPN::isDigit(char c) const
{
    return (c >= '0' && c <= '9');
}

bool RPN::isOperator(char c) const
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int RPN::applyOp(char op, int a, int b) const
{
    if (op == '+')
        return (a + b);
    if (op == '-')
        return (a - b);
    if (op == '*')
        return (a * b);
    if (op == '/')
    {
        if (b == 0)
            throw std::invalid_argument("Division by zero");
        return (a / b);
    }
    throw std::invalid_argument("Invalid operator");
}