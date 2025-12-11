/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:49:05 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/10 14:51:49 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name),_weapon(weapon) // por que es esto?
{
   std::cout << name << " created with " << weapon.getType() << std::endl;
}
// void HumanA::setWeapon(Weapon weapon)
// {
//     this->_weapon = weapon;
// }
void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->_name << " destroyed" << std::endl;
}
