/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:33:14 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/01 15:51:09 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
        std::cout << this->_name 
                  << ": BraiiiiiiinnnzzzZ..." 
                  << std::endl;
}
void Zombie::setName(std::string name)
{
    this->_name = name;
}
Zombie::Zombie()
{
}
// Zombie::Zombie(std::string name)
// {
//     this->_name = name;
// }
Zombie::~Zombie()
{
    std::cout << this->_name 
                  << ": destroyed" 
                  << std::endl;
}