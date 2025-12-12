/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:32:58 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 20:58:40 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);
int main (void)
{
    Zombie *horde;
    horde = zombieHorde(6,"Zombies");
    for(int i = 0; i < 6; i++)
        horde[i].announce();
    
    delete[] horde;
    return (0);
}