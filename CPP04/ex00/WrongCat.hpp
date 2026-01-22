/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:27:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 23:33:34 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
public:
    // constructor default
    Cat(void);
    // constructor
    Cat(std::string name);
    // assignment operator
    Cat(const Cat &cpy);
    // operator overload
    Cat &operator=(const Cat &cpy);
    // destructor
    virtual ~Cat();
    
    void getType();
    void makesound();
};

#endif