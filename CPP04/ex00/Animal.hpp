/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:04:05 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 23:50:34 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

class Animal
{
    protected:
        std::string _type;
    public:
        // constructor default
        Animal(void);
        // constructor
        Animal(std::string name);
        // assignment operator
        Animal(const Animal &cpy);
        // operator overload
        Animal &operator=(const Animal &cpy);
        // destructor
        virtual ~Animal();

        void getType();
        virtual void makeSound();
};

#endif ANIMAL_HPP