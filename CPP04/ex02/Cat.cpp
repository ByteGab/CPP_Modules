/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:50:45 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 21:08:50 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void) : AAnimal("Cat")
{
    this->_brain = new Brain();
   std::cout << GREEN << _type << " has been constructed!" << RESET << std::endl;
}

Cat::Cat(const Cat &cpy) : AAnimal (cpy)
{
    this->_brain = new Brain(*cpy._brain);
    std::cout << CYAN << "Cat Copy Constructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
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

Cat::~Cat()
{
    delete _brain;
    std::cout << RED << _type << " has been destroyed." << RESET << std::endl;
}

void Cat::makeSound() const
{
       std::cout << GREEN << _type << " says: " << " MIAU" << RESET << std::endl;
}

void Cat::setIdea(int index, std::string idea) const
{
    this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}