/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:16:13 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 12:05:09 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
   std::cout << GREEN << "AMateria " << _type << " has been constructed!" << RESET << std::endl;
}
AMateria::AMateria(std::string const &type) : _type(type)
{
   std::cout << GREEN << "AMateria " << _type << " has been constructed!" << RESET << std::endl; 
}

AMateria::AMateria(const AMateria &cpy) : _type(cpy._type)
{
    std::cout << CYAN << "AMateria Copy Constructor called" << RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &cpy)
{
   (void)cpy;
   std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
   return (*this);
}

AMateria::~AMateria()
{
    std::cout << RED << "AMateria " << _type << " has been destroyed." << RESET << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}