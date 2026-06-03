/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:53:00 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 19:46:15 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Default"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
}

Form::Form(std::string const &name, int gradeSign, int gradeExec) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &cpy) : _name(cpy._name), _isSigned(cpy._isSigned), _gradeSign(cpy._gradeSign), _gradeExec(cpy._gradeExec)
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &cpy)
{
    if (this != &cpy)
        this->_isSigned = cpy._isSigned;
        
    return (*this);
}

std::string const &Form::getName() const
{
    return (this->_name);
}

bool Form::getIsSigned() const
{
    return (this->_isSigned);
}

int Form::getGradeSign() const
{
    return (this->_gradeSign);
}

int Form::getGradeExec() const
{
    return (this->_gradeExec);
}


void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->_isSigned)
        throw Form::AlreadySignedException();
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

const char* Form::AlreadySignedException::what() const throw()
{
    return ("Form is already signed!");
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
    out << "Form: " << form.getName() << ", signed: ";
    if (form.getIsSigned())
        out << "yes";
    else
        out << "no";
    out << ", grade required to sign: " << form.getGradeSign()
        << ", grade required to execute: " << form.getGradeExec();
    return (out);
}
