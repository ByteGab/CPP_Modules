/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:57:41 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 12:03:46 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("default")
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << GREEN << "Character: " << _name << " has been constructed!" << RESET << std::endl;   
}

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << GREEN << "Character: " << _name << " has been constructed!" << RESET << std::endl;   
}

Character::Character(const Character &cpy) : _name(cpy._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (cpy._inventory[i])
            this->_inventory[i] = cpy._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    std::cout << CYAN << "Character Copy Constructor called" << RESET << std::endl;
}

Character &Character::operator=(const Character &cpy) 
{
    if (this != &cpy)
    {
        for (int i = 0; i < 4; i++)
        {
           if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
        
        this->_name = cpy._name;
        for (int i = 0; i < 4; i++)
        {
            if (cpy._inventory[i])
                this->_inventory[i] = cpy._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;   
        }
    }
    
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}


Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << RED << "Character: " << _name << " has been destroyed." << RESET << std::endl;
}
std::string const	&Character::getName() const
{
    return (this->_name);
}

void	Character::equip(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            return;
        }
    }
}

void	Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->_inventory[idx] = NULL;
}

void    Character::use(int idx, ICharacter &target)
{
   if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
}

