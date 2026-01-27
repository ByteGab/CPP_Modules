/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:25:29 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 20:27:04 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== TEST 1: MANDATORY ===" << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        
        delete j;
        delete i;
    }
    
    std::cout <<  "=== TEST 2: DEEP COPY ===" << std::endl;
    {
        std::cout << "1. Creating an ORIGINAL dog and assigning it an idea...." << std::endl;
        Dog original;
        original.setIdea(0, "¡I want a bone!");
        
        std::cout << "Original has the idea: " << original.getIdea(0) << std::endl;

        std::cout << "\n2. Creating a COPY using the copy constructor..." << std::endl;
        Dog copy = original;

        std::cout << "\n3. Modifying the ORIGINAL's idea..." << std::endl;
        original.setIdea(0, "¡Now I want to sleep!");

        std::cout << "Original now thinks: " << original.getIdea(0) << std::endl;
        std::cout << "The copy is still thinking:  " << copy.getIdea(0) << std::endl;

        if (copy.getIdea(0) == "¡I want a bone!")
            std::cout << GREEN << "\n✅ SUCCESS: The copy kept its old idea. It's a Deep Copy!" << RESET << std::endl;
        else
            std::cout << RED << "\n❌ FAIL: The copy changed along with the original. It's a Shallow Copy." << RESET << std::endl;
    }

    return (0);
}