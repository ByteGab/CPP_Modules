/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:03:11 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 23:50:25 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
   std::cout << GREEN << "Animal " << _type << " has been constructed!" << RESET << std::endl;
}

Animal::Animal(std::string name)
{
    
}

Animal::Animal(const Animal &cpy)
{
    
}

Animal &Animal::operator=(const Animal &cpy)
{
    
}

Animal::~Animal()
{
    
}
void Animal::getType()
{
    
}
void Animal::makeSound()
{
    
}