/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:41:08 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 18:41:25 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"


int main ()
{
    std::cout << CYAN << "--- TEST 1: Valid bureaucrat creation and increment ---" << RESET << std::endl;
    try 
    {
        Bureaucrat pepe("Pepe", 50);
        std::cout << pepe << std::endl;
        
        pepe.incrementGrade();
        std::cout << pepe << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << CYAN << "\n--- TEST 2: Exception - Creating bureaucrat with grade too high (0) ---" << RESET << std::endl;
    try 
    {
        Bureaucrat andrei("Andrei", 0);
        std::cout << andrei << std::endl;
        // Intenta instanciar un Bureaucrat con grado 0 aquí
    }
    catch (std::exception &e) 
    {
        std::cerr << "Caught error: " << e.what() << std::endl;
    }
    std::cout << CYAN << "\n--- TEST 3: Exception - Incrementing bureaucrat with grade 1 ---" << RESET << std::endl;
    try 
    {
        Bureaucrat daniel("Daniel", 1);
        std::cout << daniel << std::endl;
        
        daniel.incrementGrade();
    }
    catch (std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << CYAN << "\n--- TEST 4: Exception - Decrementing bureaucrat with grade 150 ---" << RESET << std::endl;
    try 
    {
        Bureaucrat paco("Paco", 150);
        std::cout << paco << std::endl;
        
        paco.decrementGrade();
        std::cout << paco << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cerr << "Caught error: " << e.what() << std::endl;
    }
    
    return (0);
}