/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:38:38 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 18:27:39 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << GREEN << "ScavTrap " << _name << " has spawned!" << RESET << std::endl;

}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << GREEN << "ScavTrap " << _name << " has spawned!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy):ClapTrap(cpy)
{
    std::cout << CYAN << "ScavTrap Copy Constructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    if (this != &cpy)
        ClapTrap::operator=(cpy);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << _name << " has exploded!" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << RED << "ScavTrap " << _name << " is dead and cannot attack!" << RESET << std::endl;
        return;
    }
    
    if ((_energyPoints == 0))
    {
        std::cout << YELLOW << "ScavTrap " << _name << " is out of energy!" << RESET << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << BLUE << "ScavTrap " << _name << " attacks " << target << ", causing " 
              << _attackDamage << " points of damage! " << RESET << std::endl;
}

void ScavTrap::guardGate()
{
    if (_hitPoints == 0)
    {
        std::cout << RED << "ScavTrap " << _name << " is dead and cannot enter Gate keeper mode!" << RESET << std::endl;
        return;
    }
    std::cout << CYAN << "ScavTrap " << _name << " is now in Gate keeper mode." << RESET << std::endl;
}
