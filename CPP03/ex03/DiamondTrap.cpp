/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:28:07 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/21 19:17:26 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (void) : ClapTrap("default_clap_name") 
{
    this->_name = "default_clap_name";
    std::cout << GREEN << "DiamondTrap " << _name << " has been constructed!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << GREEN << "DiamondTrap " << _name << " has been constructed!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy): ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
    std::cout << CYAN << "DiamondTrap Copy Constructor called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpy)
{
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    if (this != &cpy)
        ClapTrap::operator=(cpy);
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap " << _name << " has exploded!" << RESET << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << std::endl << MAGENTA << "--- 🤖 IDENTITY CHECK 🤖 ---" << RESET << std::endl;
    std::cout << "My name is: " << BOLD << CYAN << this->_name << RESET << std::endl;
    std::cout << "My Grandpa's name is: " << BOLD << YELLOW << ClapTrap::_name << RESET << std::endl;
    std::cout << MAGENTA << "----------------------------" << RESET << std::endl << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
