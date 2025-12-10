/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:49:13 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/10 14:51:22 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
    this->_name = name;
    std::cout << name << " created with no weapon" <<  std::endl;

}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
HumanB::~HumanB()
{
    std::cout << this->_name << " destroyed" << std::endl;   
}   