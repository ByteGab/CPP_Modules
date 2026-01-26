/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:26:29 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/26 22:36:07 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
   std::cout << GREEN << "WrongCat " << _type << " has been constructed!" << RESET << std::endl;    
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal (cpy)
{
    std::cout << CYAN << "WrongCat Copy Constructor called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
   if (this != &cpy)
        WrongAnimal::operator=(cpy);
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat " << _type << " has been destroyed." << RESET << std::endl;
}

void WrongCat::makeSound() const
{
       std::cout << GREEN << "WrongCat says: " << _type << " MIAU" << RESET << std::endl;
}