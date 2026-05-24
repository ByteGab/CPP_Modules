/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:45:44 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 21:00:28 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(void)
{
    
}

Intern::Intern(const Intern &cpy)
{
    *this = cpy;
}

Intern &Intern::operator=(const Intern &cpy)
{
    (void)cpy;
    return (*this);
}

Intern::~Intern()
{
    
}

AForm *Intern::makeShrubbery(const std::string &target) const
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomy(const std::string &target) const
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidential(const std::string &target) const
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm *(Intern::*funcs[])(const std::string &target) const = {
        &Intern::makeShrubbery,
        &Intern::makeRobotomy,
        &Intern::makePresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*funcs[i])(target);
        }
    }

    std::cout << "Intern cannot create form '" << name << "' because it doesn't exist" << std::endl;
    return (NULL);
}
