/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:25:51 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/02 10:43:46 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// Definiciones de colores ANSI
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"

int main (void)
{
    std::string phrase = "HI THIS IS BRAIN";
    std::string *stringPTR = &phrase;
    std::string &stringREF = phrase;

    std::cout << YELLOW << "--- MEMORY ADDRESSES ---" << RESET << std::endl;
    std::cout << "Address of phrase variable: " << RED << &phrase << RESET << std::endl; 
    std::cout << "Address held by stringPTR:  " << RED << stringPTR << RESET << std::endl;
    std::cout << "Address held by stringREF:  " << RED << &stringREF << RESET << std::endl;

    std::cout << std::endl;
    std::cout << YELLOW << "--- VALUES ---" << RESET << std::endl;
    std::cout << "Value of phrase variable:   " << GREEN << phrase << RESET << std::endl;
    std::cout << "Value pointed to by stringPTR: " << GREEN << *stringPTR << RESET << std::endl;
    std::cout << "Value pointed to by stringREF: " << GREEN << stringREF << RESET << std::endl;
    std::cout << std::endl;

    return 0;
}