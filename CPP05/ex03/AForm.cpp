/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:53:00 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 20:02:36 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("Default"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
}

AForm::AForm(std::string const &name, int gradeSign, int gradeExec) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw AForm::GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &cpy) : _name(cpy._name), _isSigned(cpy._isSigned), _gradeSign(cpy._gradeSign), _gradeExec(cpy._gradeExec)
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &cpy)
{
    if (this != &cpy)
        this->_isSigned = cpy._isSigned;
        
    return (*this);
}

std::string const &AForm::getName() const
{
    return (this->_name);
}

bool AForm::getIsSigned() const
{
    return (this->_isSigned);
}

int AForm::getGradeSign() const
{
    return (this->_gradeSign);
}

int AForm::getGradeExec() const
{
    return (this->_gradeExec);
}


void AForm::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    this->_isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
        
    this->executeAction();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
    out << "AForm: " << form.getName() << ", signed: ";
    if (form.getIsSigned())
        out << "yes";
    else
        out << "no";
    out << ", grade required to sign: " << form.getGradeSign()
        << ", grade required to execute: " << form.getGradeExec();
    return (out);
}
