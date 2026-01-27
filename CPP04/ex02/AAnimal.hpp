/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:04:05 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 21:09:25 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

class AAnimal
{
    protected:
        std::string _type;
    public:
        // constructor default
        AAnimal(void);
        // constructor
        AAnimal(std::string type);
        // assignment operator
        AAnimal(const AAnimal &cpy);
        // operator overload
        AAnimal &operator=(const AAnimal &cpy);
        // destructor
        virtual ~AAnimal();

        std::string  getType() const;
        virtual void makeSound() const = 0;
};

#endif