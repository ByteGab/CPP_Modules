/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:37:42 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 21:08:57 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
    this->_brain = new Brain();
   std::cout << GREEN <<  _type << " has been constructed!" << RESET << std::endl;
}

Dog::Dog(const Dog &cpy) : AAnimal (cpy)
{
    this->_brain = new Brain(*cpy._brain);
    std::cout << CYAN << "Dog Copy Constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
   if (this != &cpy)
   {
        AAnimal::operator=(cpy);
        delete this->_brain;
        this->_brain = new Brain(*cpy._brain);
    }
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << RED << _type << " has been destroyed." << RESET << std::endl;
}

void Dog::makeSound() const
{
       std::cout << GREEN << _type << " says: " << " WOOF" << RESET << std::endl;
}

void Dog::setIdea(int index, std::string idea) const
{
    this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}