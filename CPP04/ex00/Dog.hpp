/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:27:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 23:30:36 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
public:
    // constructor default
    Dog(void);
    // constructor
    Dog(std::string name);
    // assignment operator
    Dog(const Dog &cpy);
    // operator overload
    Dog &operator=(const Dog &cpy);
    // destructor
    virtual ~Dog();
    
    void getType();
    virtual void makesound();
};

#endif