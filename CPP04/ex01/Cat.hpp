/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:27:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 11:26:22 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain; 
    public:
        // constructor default
        Cat(void);
        // assignment operator
        Cat(const Cat &cpy);
        // operator overload
        Cat &operator=(const Cat &cpy);
        // destructor
        virtual ~Cat();
        
        virtual void makeSound() const;
        void setIdea(int index, std::string idea) const;
        std::string getIdea(int index) const;
};

#endif