/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:56:32 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 13:13:09 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
    // TEST 1
    std::cout << std::endl << MAGENTA << "=== " << "TEST 1: CONSTRUCTORS AND WHOAMI " << " ===" << RESET << std::endl;
    {
        std::cout << YELLOW << "[1] Creating 'Optimus Prime'..." << RESET << std::endl;
        std::cout << "(You should see: 1 ClapTrap, 1 FragTrap, 1 ScavTrap, 1 DiamondTrap)" << std::endl;
        
        DiamondTrap robot("Optimus Prime");

        std::cout << std::endl << YELLOW << "[2] Testing whoAmI()..." << RESET << std::endl;
        robot.whoAmI();
        
        std::cout << YELLOW << "[3] Destruyendo a 'Monster'..." << RESET << std::endl;
    }
    
    std::cout << std::endl << MAGENTA << "=== " << "TEST 2: VERIFICACIÓN DE PODERES " << " ===" << RESET << std::endl;
    {
        std::cout << YELLOW << "[1] Creating 'Optimus Prime'..." << RESET << std::endl;
        DiamondTrap robot("Optimus Prime");

        std::cout << std::endl << YELLOW << "[2] Testing Attack (ScavTrap inheritance)..." << RESET << std::endl;
        robot.attack("Optimus Prime");

        std::cout << std::endl << YELLOW << "[3] Testing Special Ability (FragTrap inheritance)..." << RESET << std::endl;
        robot.highFivesGuys();

        std::cout << std::endl << YELLOW << "[4] Testing Guardian Mode (ScavTrap inheritance)..." << RESET << std::endl;
        robot.guardGate();
    }

    std::cout << std::endl << MAGENTA << "=== " << "TEST 3: CANONICAL (COPIES) " << " ===" << RESET << std::endl;
    {
        std::cout << YELLOW << "[1] Creando Original..." << RESET << std::endl;
        DiamondTrap original("Original");

        std::cout << std::endl << YELLOW << "[2] Testing Copy Constructor (Clon)..." << RESET << std::endl;
        DiamondTrap clon(original);
        
        std::cout << std::endl << YELLOW << "[3] Modifying the Clone to verify that they are independent..." << RESET << std::endl;
        clon.attack("Original"); // El clon ataca al original

        std::cout << std::endl << YELLOW << "[4] Testing Assignment Operator (=)..." << RESET << std::endl;
        DiamondTrap asignado("Trash"); // Creamos uno temporal
        asignado = original; // Lo sobrescribimos
        
        std::cout << std::endl << YELLOW << "[5] Verifying the identity of the assigned..." << RESET << std::endl;
        asignado.whoAmI();
    }
    
    return (0);
}