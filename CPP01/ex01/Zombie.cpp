/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:33:14 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 20:55:25 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
        std::cout << MAGENTA << this->_name << RESET 
              << ": " << CYAN << "BraiiiiiiinnnzzzZ..." << RESET 
              << std::endl;
}
void Zombie::setName(std::string name)
{
    this->_name = name;
}
Zombie::Zombie()
{
    std::cout << MAGENTA << "Zombie" << RESET
        << RESET << ": "<< GREEN <<"created" << RESET 
            << std::endl;
}

Zombie::~Zombie()
{
    std::cout << MAGENTA << this->_name << RESET 
              << ": " << RED << "destroyed" << RESET 
              << std::endl;
}