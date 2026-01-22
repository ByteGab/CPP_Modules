/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:56:58 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 18:22:16 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
   std::cout << GREEN << "ClapTrap " << _name << " has been constructed!" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << GREEN << "ClapTrap " << _name << " has been constructed!" << RESET << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &cpy) 
    : _name(cpy._name), _hitPoints(cpy._hitPoints), _energyPoints(cpy._energyPoints), _attackDamage(cpy._attackDamage)
{
    std::cout << CYAN << "ClapTrap Copy Constructor called" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy) 
{
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    if (this != &cpy)
    {
        _name = cpy._name;
        _hitPoints = cpy._hitPoints;
        _energyPoints = cpy._energyPoints;
        _attackDamage = cpy._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() 
{
    std::cout << RED << "ClapTrap " << _name << " has been destroyed." << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << RED << "ClapTrap " << _name << " is dead and cannot attack!" << RESET << std::endl;
        return;
    }
    
    if ((_energyPoints == 0))
    {
        std::cout << YELLOW << "ClapTrap " << _name << " is out of energy!" << RESET << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << BLUE << "ClapTrap " << _name << " attacks " << target << ", causing " 
              << _attackDamage << " points of damage! " << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << RED << "ClapTrap " << _name << " is already dead!" << RESET << std::endl;
        return;
    }
    if (amount > _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints-= amount;
    std::cout << MAGENTA << "ClapTrap " << _name << " took " << amount 
          << " points of damage! HP is now " << _hitPoints << "." << RESET << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << RED << "ClapTrap " << _name << " is dead and cannot be repaired!" << RESET << std::endl;
        return;
    }
    
    if ((_energyPoints == 0))
    {
        std::cout << YELLOW << "ClapTrap " << _name << " is out of energy!" << RESET << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints+= amount;
    std::cout << GREEN << "ClapTrap " << _name << " repairs itself, recovering " << amount 
          << " hit points! HP is now " << _hitPoints << "." << RESET << std::endl;
}