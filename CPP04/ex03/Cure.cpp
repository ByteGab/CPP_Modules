/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:48:24 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/28 22:27:01 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << GREEN << "Cure " << _type << " has been constructed!" << RESET << std::endl;   
}

Cure::Cure(const Cure &cpy) : AMateria(cpy)
{
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &cpy)
{
    if (this != &cpy) // delete??
    {
        AMateria::operator=(cpy);
    }
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Cure::~Cure()
{
    std::cout << RED << "Cure " << _type << " has been destroyed." << RESET << std::endl;
}

AMateria *Cure::clone(void) const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
