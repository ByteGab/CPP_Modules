/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:03:56 by gafreire          #+#    #+#             */
/*   Updated: 2025/11/27 17:44:01 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
        std::cout << this->_name 
                  << ": BraiiiiiiinnnzzzZ..." 
                  << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}
Zombie::~Zombie()
{
    std::cout << this->_name 
                  << ": destroyed" 
                  << std::endl;
}