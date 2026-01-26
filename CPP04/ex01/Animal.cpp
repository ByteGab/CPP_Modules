/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:03:11 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/26 22:35:48 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
   std::cout << GREEN << "Animal " << _type << " has been constructed!" << RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
   std::cout << GREEN << "Animal " << _type << " has been constructed!" << RESET << std::endl;
}

Animal::Animal(const Animal &cpy) : _type (cpy._type)
{
    std::cout << CYAN << "Animal Copy Constructor called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &cpy)
{
   if (this != &cpy)
        _type = cpy._type;
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED << "Animal " << _type << " has been destroyed." << RESET << std::endl;
}
std::string Animal::getType() const
{
    return (this->_type);
}
void Animal::makeSound() const 
{
    std::cout << "..." << std::endl;
}