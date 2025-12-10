/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:48:32 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/10 11:43:23 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType()
{
    return (this->_type);
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}
Weapon::~Weapon()
{
}