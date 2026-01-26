/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:38:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/26 22:34:15 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        // constructor default
        WrongAnimal(void);
        // constructor
        WrongAnimal(std::string type);
        // assignment operator
        WrongAnimal(const WrongAnimal &cpy);
        // operator overload
        WrongAnimal &operator=(const WrongAnimal &cpy);
        // destructor
        ~WrongAnimal();

        std::string  getType() const;
        void makeSound() const;
};

#endif