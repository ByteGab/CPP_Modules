/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:27:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 11:25:21 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    // constructor default
    Dog(void);
    // assignment operator
    Dog(const Dog &cpy);
    // operator overload
    Dog &operator=(const Dog &cpy);
    // destructor
    virtual ~Dog();
    
    virtual void makeSound() const;
};

#endif