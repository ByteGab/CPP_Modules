/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:03:11 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 12:02:30 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Default")
{
   std::cout << GREEN << "AAAnimal " << _type << " has been constructed!" << RESET << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
   std::cout << GREEN << "AAnimal " << _type << " has been constructed!" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy) : _type (cpy._type)
{
    std::cout << CYAN << "AAnimal Copy Constructor called" << RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &cpy)
{
    if (this != &cpy)
        _type = cpy._type;
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << RED << "AAnimal " << _type << " has been destroyed." << RESET << std::endl;
}
std::string AAnimal::getType() const
{
    return (this->_type);
}
