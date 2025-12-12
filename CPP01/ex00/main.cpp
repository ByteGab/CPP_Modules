/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:55:55 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 15:43:44 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name);
void randomChump( std::string name);

int main (void)
{
    Zombie *zombie = newZombie("Foo");
    zombie->announce();

    randomChump("Andrei");
    delete zombie;
    return (0);
}