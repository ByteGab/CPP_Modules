/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:26:12 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 20:26:17 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm(cpy), _target(cpy._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
    if (this != &cpy)
        this->_target = cpy._target;
    return (*this);
}

std::string const &PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void PresidentialPardonForm::executeAction() const
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
