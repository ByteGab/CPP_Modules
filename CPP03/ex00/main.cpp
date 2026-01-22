/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:56:32 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 18:47:29 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
    std::cout << std::endl << MAGENTA << "=== " << "TEST 1: CONSTRUCTORS AND NORMAL FLOW" << " ===" << RESET << std::endl;
    ClapTrap robotA("Wall-E");
    ClapTrap robotB("Terminator");
    robotA.attack("Target Dummy");
    robotA.takeDamage(5);
    robotA.beRepaired(3);
    
    std::cout << std::endl << MAGENTA << "=== " << "TEST 2: ENERGY DEPLETION (Loop)" << " ===" << RESET << std::endl;
    for (int i = 0; i < 11; i++)
    {
        std::cout << YELLOW << "Attempt " << i + 1 << ": " << RESET; 
        robotB.attack("Punching bag");
    }
    std::cout << YELLOW << "Repair attempt without power: " << RESET;
    robotB.beRepaired(5);

    std::cout << std::endl << MAGENTA << "=== " << "TEST 3: DEATH AND POST-MORTEM ACTIONS" << " ===" << RESET << std::endl;
    ClapTrap robotC("Bumblebee");
    robotC.takeDamage(100);
    
    std::cout << RED << "Trying to revive / acting while dead: " << RESET << std::endl;
    robotC.attack("Nobody");
    robotC.beRepaired(10);
    robotC.takeDamage(5);

    std::cout << std::endl << MAGENTA << "=== " << "TEST 4: CANONICAL FORM (Copies and Assignment)" << " ===" << RESET << std::endl;
    
    std::cout << BLUE << "[Copying to Robot-A in Clone-A]" << RESET << std::endl;
    ClapTrap clonA(robotA); 
    
    std::cout << BLUE << "[Assigning Robot-A to a new Robot-D]" << RESET << std::endl;
    ClapTrap robotD("Temp");
    robotD = robotA;
    
    std::cout << std::endl << "Final state of Clone-A (Should be identical to Robot-A):" << std::endl;
    clonA.attack("Test Clon");

    std::cout << std::endl << MAGENTA << "=== " << "DESTRUCTORS (Automatic upon exit)" << " ===" << RESET << std::endl;
    return (0);
}