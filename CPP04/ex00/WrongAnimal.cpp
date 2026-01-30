/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:42:56 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 11:39:39 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default")
{
   std::cout << GREEN << "Animal " << _type << " has been constructed!" << RESET << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << GREEN << "Animal " << _type << " has been constructed!" << RESET << std::endl;   
}
WrongAnimal::WrongAnimal(const WrongAnimal &cpy) :_type (cpy._type)
{
    std::cout << CYAN << "Animal Copy Constructor called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
    if (this != &cpy)
        _type = cpy._type;
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "Animal " << _type << " has been destroyed." << RESET << std::endl;
}
std::string  WrongAnimal::getType() const
{
    return (this->_type);
}
void WrongAnimal::makeSound() const
{
    std::cout << "..." << std::endl;
}