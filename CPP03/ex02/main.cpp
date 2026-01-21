/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:56:32 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/21 11:30:15 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main (void)
{
    // Test 1
    std::cout << std::endl << MAGENTA << "=== " << "TEST 1: CONSTRUCTORS " << " ===" << RESET << std::endl;
    std::cout << YELLOW << "[Creating Bender]" << RESET << std::endl;
    FragTrap robot("Bender");
    
    // Test 2
    std::cout << std::endl << MAGENTA << "=== " << "TEST 2: STATS AND ATTACK)" << " ===" << RESET << std::endl;
    robot.attack("Target Dummy");
    robot.takeDamage(20);
    robot.beRepaired(10);
    
    // Test 3
    std::cout << std::endl << MAGENTA << "=== " << "TEST 3: (HIGH FIVES)" << " ===" << RESET << std::endl;
    robot.highFivesGuys();
    
    // Test 4
    std::cout << YELLOW << "[Testing the Copy Constructor: Cloning Bender]" << RESET << std::endl;
    FragTrap clon(robot);
    
    std::cout << YELLOW << "[Testing the Assignment Operator: Creating an Empty FragTrap]" << RESET << std::endl;
    FragTrap assigned("Basic");
    
    std::cout << YELLOW << "[Assigning a Robot to the Empty FragTrap]" << RESET << std::endl;
    assigned = robot;
    
    std::cout << std::endl << "Testing That the Clones Work:" << std::endl;
    clon.attack("Clon Target");
    assigned.highFivesGuys();
    
    std::cout << std::endl << "Testing error High fives:" << std::endl;
    clon.takeDamage(110);
    clon.highFivesGuys();

    std::cout << std::endl << MAGENTA << "=== " << "DESTRUCTORS (Automatic upon exit)" << " ===" << RESET << std::endl;
    return (0);
}