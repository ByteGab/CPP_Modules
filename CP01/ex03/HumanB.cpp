/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:49:13 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/02 17:42:47 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->_name << std::endl;
    std::cout << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name,Weapon *weapon) : _weapon(NULL)
{
    this->_name = name;
    std::cout << name << "attacks with no weapon" <<  std::endl;

}
    