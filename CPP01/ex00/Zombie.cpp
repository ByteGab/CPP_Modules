/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:03:56 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 15:37:54 by gafreire         ###   ########.fr       */
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
    std::cout << this->_name 
                  << ": created" 
                  << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->_name 
                  << ": destroyed" 
                  << std::endl;
}