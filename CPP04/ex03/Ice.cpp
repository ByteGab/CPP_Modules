/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:36:34 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/28 22:24:00 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << GREEN << "Ice " << _type << " has been constructed!" << RESET << std::endl;   
}

Ice::Ice(const Ice &cpy) : AMateria(cpy)
{
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
}

Ice &Ice::operator=(const Ice &cpy)
{
    if (this != &cpy) // delete??
    {
        AMateria::operator=(cpy);
    }
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << RED << "Ice " << _type << " has been destroyed." << RESET << std::endl;
}

AMateria *Ice::clone(void) const
{
    return new Ice(*this);
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}