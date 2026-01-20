/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:56:32 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/20 12:38:34 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main (void)
{
    // Test 1
    std::cout << std::endl << MAGENTA << "=== " << "TEST 1: CONSTRUCTORS AND STATS" << " ===" << RESET << std::endl;
    std::cout << YELLOW << "[Creating R2-D2]" << RESET << std::endl;
    ScavTrap robot("R2-D2");
    
    // Test 2
    std::cout << std::endl << MAGENTA << "=== " << "TEST 2: NEW ATTACK)" << " ===" << RESET << std::endl;
    robot.attack("Target Dummy");;
    robot.takeDamage(10);
    robot.beRepaired(10);
    
    // Test 3
    std::cout << std::endl << MAGENTA << "=== " << "TEST 3: (GUARD GATE)" << " ===" << RESET << std::endl;
    robot.guardGate();
    
    // Test 4
    std::cout << YELLOW << "[Testing the Copy Constructor: Cloning a R2-D2]" << RESET << std::endl;
    ScavTrap clon(robot);
    
    std::cout << YELLOW << "[Testing the Assignment Operator: Creating an Empty ScavTrap]" << RESET << std::endl;
    ScavTrap assigned("Basic");
    
    std::cout << YELLOW << "[Assigning a Robot to the Empty ScavTrap]" << RESET << std::endl;
    assigned = robot;
    
    std::cout << std::endl << "Testing That the Clones Work:" << std::endl;
    clon.attack("Clon Target");
    assigned.guardGate();
    std::cout << std::endl << "Testing error Guard gate:" << std::endl;
    clon.takeDamage(110);
    clon.guardGate();

    std::cout << std::endl << MAGENTA << "=== " << "DESTRUCTORS (Automatic upon exit)" << " ===" << RESET << std::endl;
    return (0);
}