/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:49:05 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 18:42:10 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name),_weapon(weapon)
{
   std::cout << GREEN << name << RESET 
              << " created with " << YELLOW << weapon.getType() << RESET 
              << std::endl;
}

void HumanA::attack()
{
    std::cout << GREEN << this->_name << RESET 
              << " attacks with their " << YELLOW << this->_weapon.getType() << RESET 
              << std::endl;
}

HumanA::~HumanA()
{
    std::cout << RED << this->_name << " destroyed" << RESET << std::endl;
}
