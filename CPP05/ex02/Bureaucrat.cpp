/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:42:08 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 18:22:29 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
    
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name), _grade(cpy._grade)
{
    
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < 1)
        throw GradeTooHighException();
    else if (this->_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
    if (this != &cpy)
        this->_grade = cpy._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if(this->_grade == 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if(this->_grade == 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The grade is too low");
}

std::ostream &operator<<(std::ostream &src, Bureaucrat const &other)
{
    src << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
    return (src);
}