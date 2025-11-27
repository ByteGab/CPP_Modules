/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:55:55 by gafreire          #+#    #+#             */
/*   Updated: 2025/11/27 17:51:16 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name);
void randomChump( std::string name);

int main (void)
{
    Zombie *zombie = newZombie("Foo");
    zombie->announce();
    zombie->~Zombie();

    randomChump("Andrei");
    return (0);
}