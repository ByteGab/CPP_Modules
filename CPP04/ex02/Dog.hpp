/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:27:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 21:08:59 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
        
        void makeSound() const;
        void setIdea(int index, std::string idea) const;
        std::string getIdea(int index) const;
};

#endif