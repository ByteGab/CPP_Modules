/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:54:52 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 21:05:20 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#define CYAN "\033[36m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

int main()
{
    std::cout << CYAN << "--- INITIALIZING BUREAUCRAT ---" << RESET << std::endl;
    Bureaucrat boss("Boss", 1);
    std::cout << boss << std::endl;

    std::cout << CYAN << "\n--- INTERN TESTS ---" << RESET << std::endl;
    Intern someRandomIntern;
    AForm* robotomyForm;
    AForm* shrubberyForm;
    AForm* pardonForm;
    AForm* unknownForm;

    std::cout << YELLOW << "[Intern creates Robotomy Request Form]" << RESET << std::endl;
    robotomyForm = someRandomIntern.makeForm("robotomy request", "Bender");
    
    std::cout << YELLOW << "[Intern creates Shrubbery Creation Form]" << RESET << std::endl;
    shrubberyForm = someRandomIntern.makeForm("shrubbery creation", "Home");
    
    std::cout << YELLOW << "[Intern creates Presidential Pardon Form]" << RESET << std::endl;
    pardonForm = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
    
    std::cout << YELLOW << "[Intern tries to create an unknown form]" << RESET << std::endl;
    unknownForm = someRandomIntern.makeForm("time travel request", "TARDIS");

    std::cout << YELLOW << "\n[Boss executing intern's forms]" << RESET << std::endl;
    if (robotomyForm) 
    {
        boss.signForm(*robotomyForm);
        boss.executeForm(*robotomyForm);
        delete robotomyForm;
    }
    if (shrubberyForm) 
    {
        boss.signForm(*shrubberyForm);
        boss.executeForm(*shrubberyForm);
        delete shrubberyForm;
    }
    if (pardonForm) 
    {
        boss.signForm(*pardonForm);
        boss.executeForm(*pardonForm);
        delete pardonForm;
    }
    if (unknownForm)
        delete unknownForm;

    return (0);
}
