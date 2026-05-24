/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:54:52 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 19:54:56 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

#define CYAN "\033[36m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

int main()
{
    std::cout << CYAN << "--- TESTING FORM CREATION ---" << RESET << std::endl;
    try 
    {
        Form f1("Tax Form", 50, 20);
        std::cout << f1 << std::endl;
        std::cout << "Getters: name=" << f1.getName() 
                  << " isSigned=" << f1.getIsSigned()
                  << " gradeSign=" << f1.getGradeSign()
                  << " gradeExec=" << f1.getGradeExec() << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << CYAN << "\n--- TESTING INVALID FORM GRADES ---" << RESET << std::endl;
    try 
    {
        Form f2("Top Secret Form", 0, 50);
    }
    catch (std::exception &e)
    {
        std::cout << "Expected Exception: " << e.what() << std::endl;
    }

    try 
    {
        Form f3("Junk Form", 150, 200);
    }
    catch (std::exception &e) 
    {
        std::cout << "Expected Exception: " << e.what() << std::endl;
    }

    std::cout << CYAN << "\n--- TESTING FORM SIGNING ---" << RESET << std::endl;
    Bureaucrat boss("Boss", 1);
    Bureaucrat intern("Intern", 150);
    Form contract("Contract", 50, 50);

    std::cout << boss << std::endl;
    std::cout << intern << std::endl;
    std::cout << contract << std::endl;

    std::cout << YELLOW << "\n[Intern tries to sign Contract]" << RESET << std::endl;
    intern.signForm(contract);
    std::cout << contract << std::endl;

    std::cout << YELLOW << "\n[Boss tries to sign Contract]" << RESET << std::endl;
    boss.signForm(contract);
    std::cout << contract << std::endl;

    std::cout << YELLOW << "\n[Boss tries to sign Contract again]" << RESET << std::endl;
    boss.signForm(contract); 

    return (0);
}
