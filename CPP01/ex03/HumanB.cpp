/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:49:13 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 18:49:57 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
    this->_name = name;
    std::cout << GREEN << name << RESET << " created with no weapon" << std::endl;

}

void HumanB::attack()
{
    if (this->_weapon)
    {
        std::cout << GREEN << this->_name << RESET 
                  << " attacks with their " << YELLOW << this->_weapon->getType() << RESET 
                  << std::endl;
    }
    else
    {
        std::cout << GREEN << this->_name << RESET 
                  << " cannot attack (no weapon)" << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
HumanB::~HumanB()
{
    std::cout << RED << this->_name << " destroyed" << RESET << std::endl;  
}   