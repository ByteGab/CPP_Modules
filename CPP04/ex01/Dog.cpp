/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:37:42 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/26 23:02:19 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    this->_brain = new Brain();
   std::cout << GREEN << "Dog " << _type << " has been constructed!" << RESET << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal (cpy)
{
    this->_brain = new Brain(*cpy._brain);
    std::cout << CYAN << "Dog Copy Constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
   if (this != &cpy)
   {
        Animal::operator=(cpy);
        delete this->_brain;
        this->_brain = new Brain(*cpy._brain);
    }
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << RED << "Dog " << _type << " has been destroyed." << RESET << std::endl;
}

void Dog::makeSound() const
{
       std::cout << GREEN << "Dog says: " << _type << " WOOF" << RESET << std::endl;
}