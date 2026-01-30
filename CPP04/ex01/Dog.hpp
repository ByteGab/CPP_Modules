/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:27:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 11:26:27 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain; 
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
        void setIdea(int index, std::string idea) const;
        std::string getIdea(int index) const;
};

#endif