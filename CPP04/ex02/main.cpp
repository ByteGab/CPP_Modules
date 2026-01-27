/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:25:29 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 21:22:41 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // --- TEST 0: VERIFY ABSTRACT CLASS ---
    // This proves that Animal (or AAnimal) is now an abstract class.
    
    // AAnimal test;
    // AAnimal* test2 = new AAnimal();


    std::cout << BLUE << "=== TEST 1: POLYMORPHISM ===" << RESET << std::endl;
    {
        const int count = 4;
        const AAnimal* animals[count];

        std::cout << YELLOW << "--- 1. Creating the array (Dogs and Cats) ---" << RESET << std::endl;
        for (int i = 0; i < count; i++)
        {
            if (i < count / 2)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        std::cout << YELLOW << "\n--- 2. Testing Sounds (Polymorphism) ---" << RESET << std::endl;
        for (int i = 0; i < count; i++)
        {
            std::cout << "Animal " << i << ": ";
            animals[i]->makeSound(); 
        }

        std::cout << YELLOW << "\n--- 3. Deleting the array (Destructors) ---" << RESET << std::endl;
        for (int i = 0; i < count; i++)
        {
            delete animals[i];
        }
    }
    
    std::cout << std::endl << BLUE << "=== TEST 2: DEEP COPY ===" << RESET << std::endl;
    {
        std::cout << "1. Creating an ORIGINAL dog and assigning an idea..." << std::endl;
        Dog original;
        original.setIdea(0, "I want a bone!");
        
        std::cout << "Original thinks: " << original.getIdea(0) << std::endl;

        std::cout << "\n2. Creating a COPY using the Copy Constructor..." << std::endl;
        Dog copy = original;

        std::cout << "\n3. Modifying the ORIGINAL's idea..." << std::endl;
        original.setIdea(0, "Now I want to sleep!");

        std::cout << "Original now thinks:   " << original.getIdea(0) << std::endl;
        std::cout << "The COPY still thinks: " << copy.getIdea(0) << std::endl;

        // Verification
        if (copy.getIdea(0) == "I want a bone!")
            std::cout << GREEN << "\n✅ SUCCESS: The copy kept the old idea. It is a Deep Copy!" << RESET << std::endl;
        else
            std::cout << RED << "\n❌ FAIL: The copy changed with the original. It is a Shallow Copy." << RESET << std::endl;
    
        std::cout << "\n(Destructors called automatically when exiting scope)" << std::endl;
    }

    return (0);
}