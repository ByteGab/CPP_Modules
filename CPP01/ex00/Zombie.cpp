/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:03:56 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 17:22:08 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

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