/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:52:47 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/20 16:24:22 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << GREEN << "FragTrap " << _name << " has spawned!" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << GREEN << "FragTrap " << _name << " has spawned!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy):ClapTrap(cpy)
{
    std::cout << CYAN << "FragTrap Copy Constructor called" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    if (this != &cpy)
        ClapTrap::operator=(cpy);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << RED << "FragTrap " << _name << " has exploded!" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (_hitPoints == 0)
        std::cout << RED << "ScavTrap " << _name << " is dead and cannot high five!" << RESET << std::endl;
    std::cout << CYAN << "ScavTrap " << _name << " \"HIGH FIVE!\"!" << RESET << std::endl;       
}
