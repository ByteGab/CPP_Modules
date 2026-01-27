/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:27:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 21:08:54 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
        
        void makeSound() const;
        void setIdea(int index, std::string idea) const;
        std::string getIdea(int index) const;
};

#endif