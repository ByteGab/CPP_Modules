/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:56:58 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/15 21:42:55 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
    : _name(" "), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
   std::cout << "ClapTrap " << _name << " has been constructed!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " has been constructed!" << std::endl;
}

// ClapTrap &ClapTrap::operator=(const ClapTrap &cpy) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
// {
    
// }

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    
    if ((_energyPoints == 0))
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot attack!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " 
              << _attackDamage << " points of damage! " << std::endl;
}