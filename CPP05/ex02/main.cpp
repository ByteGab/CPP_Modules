/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:54:52 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 20:32:47 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define CYAN "\033[36m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

int main()
{
    std::cout << CYAN << "--- INITIALIZING BUREAUCRATS ---" << RESET << std::endl;
    Bureaucrat boss("Boss", 1);
    Bureaucrat midTier("MidTier", 50);
    Bureaucrat intern("Intern", 150);

    std::cout << boss << std::endl;
    std::cout << midTier << std::endl;
    std::cout << intern << std::endl;

    std::cout << CYAN << "\n--- SHRUBBERY CREATION FORM ---" << RESET << std::endl;
    ShrubberyCreationForm shrub("Garden");
    std::cout << shrub << std::endl;
    
    std::cout << YELLOW << "[Intern tries to execute unsigned Shrubbery]" << RESET << std::endl;
    intern.executeForm(shrub);
    
    std::cout << YELLOW << "[Intern tries to sign Shrubbery]" << RESET << std::endl;
    intern.signForm(shrub);

    std::cout << YELLOW << "[MidTier signs Shrubbery]" << RESET << std::endl;
    midTier.signForm(shrub);

    std::cout << YELLOW << "[Intern tries to execute signed Shrubbery]" << RESET << std::endl;
    intern.executeForm(shrub);

    std::cout << YELLOW << "[MidTier executes signed Shrubbery]" << RESET << std::endl;
    midTier.executeForm(shrub);


    std::cout << CYAN << "\n--- ROBOTOMY REQUEST FORM ---" << RESET << std::endl;
    RobotomyRequestForm robot("Bender");
    std::cout << robot << std::endl;

    std::cout << YELLOW << "[MidTier signs Robotomy]" << RESET << std::endl;
    midTier.signForm(robot);

    std::cout << YELLOW << "[MidTier tries to execute Robotomy]" << RESET << std::endl;
    midTier.executeForm(robot);

    std::cout << YELLOW << "[Boss executes Robotomy]" << RESET << std::endl;
    boss.executeForm(robot);
    boss.executeForm(robot);


    std::cout << CYAN << "\n--- PRESIDENTIAL PARDON FORM ---" << RESET << std::endl;
    PresidentialPardonForm pardon("Ford Prefect");
    std::cout << pardon << std::endl;

    std::cout << YELLOW << "[MidTier tries to sign Pardon]" << RESET << std::endl;
    midTier.signForm(pardon);

    std::cout << YELLOW << "[Boss signs Pardon]" << RESET << std::endl;
    boss.signForm(pardon);

    std::cout << YELLOW << "[Boss executes Pardon]" << RESET << std::endl;
    boss.executeForm(pardon);

    return (0);
}
