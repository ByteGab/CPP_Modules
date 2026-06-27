/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:56:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/06/11 17:49:39 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <limits>
#include <cmath>

ScalarConverter::ScalarConverter(void) 
{
    
}

ScalarConverter::ScalarConverter(const ScalarConverter& src) 
{
    *this = src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) 
{
    (void)rhs;
    return (*this);
}

ScalarConverter::~ScalarConverter(void) 
{
    
}

void ScalarConverter::convert(const std::string& literal) 
{
    if (isChar(literal)) 
    {
        char c = literal[0];
        int i = static_cast<int>(c);
        float f = static_cast<float>(c);
        double d = static_cast<double>(c);
        
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    } 
    else if (isInt(literal)) 
    {
        long n = std::strtol(literal.c_str(), NULL, 10);
        if (n > std::numeric_limits<int>::max() || n < std::numeric_limits<int>::min()) 
        {
            std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
            return ;
        }
        int i = static_cast<int>(n);
        char c = static_cast<char>(i);
        float f = static_cast<float>(i);
        double d = static_cast<double>(i);

        if (i >= 0 && i <= 127) 
        {
            if (isprint(i)) 
                std::cout << "char: '" << c << "'\n";
            else 
                std::cout << "char: Non displayable\n";
        } 
        else
            std::cout << "char: impossible\n";
        
        std::cout << "int: " << i << "\n";
        std::cout << "float: " << f << ".0f\n";
        std::cout << "double: " << d << ".0\n";
    } 
    else if (isFloat(literal) || isDouble(literal)) 
    {
        double val = std::strtod(literal.c_str(), NULL);
        float f = static_cast<float>(val);
        double d = val;
        char c = static_cast<char>(f);
        int i = static_cast<int>(f);

        if (val >= 0 && val <= 127) 
        {
            if (isprint(static_cast<int>(val))) 
                std::cout << "char: '" << c << "'\n";
            else 
                std::cout << "char: Non displayable\n";
        } 
        else
            std::cout << "char: impossible\n";
            
        if (val > static_cast<double>(std::numeric_limits<int>::max()) || val < static_cast<double>(std::numeric_limits<int>::min()))
            std::cout << "int: impossible\n";
        else
            std::cout << "int: " << i << "\n";

        if (val == std::floor(val))
         {
            std::cout << "float: " << f << ".0f\n";
            std::cout << "double: " << d << ".0\n";
        } 
        else 
        {
            std::cout << "float: " << f << "f\n";
            std::cout << "double: " << d << "\n";
        }
    } 
    else if (isPseudoLiteral(literal)) 
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        
        if (literal == "nan" || literal == "nanf")
            std::cout << "float: nanf\ndouble: nan\n";
        else if (literal == "+inf" || literal == "+inff")
            std::cout << "float: +inff\ndouble: +inf\n";
        else if (literal == "-inf" || literal == "-inff")
            std::cout << "float: -inff\ndouble: -inf\n";
    } 
    else 
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
}

bool ScalarConverter::isPseudoLiteral(const std::string& literal)
{
    return (literal == "-inff" || literal == "+inff" || literal == "nanf" ||
            literal == "-inf" || literal == "+inf" || literal == "nan");
}

bool ScalarConverter::isChar(const std::string& literal)
{
    if (literal.length() == 1 && !isdigit(literal[0]))
        return (true);
    return (false);
}

bool ScalarConverter::isInt(const std::string& literal)
{
    if (literal.empty()) 
        return (false);
    
    size_t start = 0;
    if (literal[0] == '+' || literal[0] == '-')
    {
        if (literal.length() == 1) 
            return (false);
        start = 1;
    }
    
    for (size_t i = start; i < literal.length(); ++i)
    {
        if (!isdigit(literal[i]))
            return (false);
    }
    return (true);
}

bool ScalarConverter::isDouble(const std::string& literal)
{
    if (literal.empty()) 
        return (false);
    
    size_t start = 0;
    bool hasDot = false;
    bool hasDigit = false;

    if (literal[0] == '+' || literal[0] == '-')
        start = 1;
    
    for (size_t i = start; i < literal.length(); ++i)
    {
        if (literal[i] == '.')
        {
            if (hasDot) 
                return (false);
            hasDot = true;
        }
        else if (isdigit(literal[i]))
            hasDigit = true;
        else
            return (false);
    }
    return (hasDot && hasDigit);
}

bool ScalarConverter::isFloat(const std::string& literal)
{
    if (literal.empty()) 
        return (false);
    if (literal[literal.length() - 1] != 'f') 
        return (false);

    size_t start = 0;
    bool hasDot = false;
    bool hasDigit = false;

    if (literal[0] == '+' || literal[0] == '-')
        start = 1;
    for (size_t i = start; i < literal.length() - 1; ++i)
    {
        if (literal[i] == '.')
        {
            if (hasDot) return false;
            hasDot = true;
        }
        else if (isdigit(literal[i]))
        {
            hasDigit = true;
        }
        else
            return (false);
    }
    return (hasDot && hasDigit);
}