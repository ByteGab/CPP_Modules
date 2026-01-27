/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:50:45 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 18:08:37 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void) : Animal("Cat")
{
   std::cout << GREEN << "Cat " << _type << " has been constructed!" << RESET << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal (cpy)
{
    std::cout << CYAN << "Cat Copy Constructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
   if (this != &cpy)
        Animal::operator=(cpy);
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << RED << "Cat " << _type << " has been destroyed." << RESET << std::endl;
}

void Cat::makeSound() const
{
       std::cout << GREEN << "Cat says: " << _type << " MIAU" << RESET << std::endl;
}