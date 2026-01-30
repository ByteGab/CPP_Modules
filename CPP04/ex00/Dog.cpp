/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:37:42 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 10:09:34 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
   std::cout << GREEN << "Dog has been constructed!" << RESET << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal (cpy)
{
    std::cout << CYAN << "Dog Copy Constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
   if (this != &cpy)
        Animal::operator=(cpy);
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << RED << "Dog has been destroyed." << RESET << std::endl;
}

void Dog::makeSound() const
{
       std::cout << GREEN << "Dog says: WOOF" << RESET << std::endl;
}