/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:03:56 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 20:53:48 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
        std::cout << MAGENTA << this->_name << RESET 
              << ": " << CYAN << "BraiiiiiiinnnzzzZ..." << RESET 
              << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << MAGENTA << this->_name << RESET 
              << ": " << GREEN << "created" << RESET 
              << std::endl;
}
Zombie::~Zombie()
{
    std::cout << MAGENTA << this->_name << RESET 
              << ": " << RED << "destroyed" << RESET 
              << std::endl;
}