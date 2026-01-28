/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:48:33 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/28 19:50:37 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure
{
    public:
        // constructor default
        Cure(void);
        // assignment operator
        Cure(const Cure &cpy);
        // operator overload
        Cure &operator=(const Cure &cpy);
        // destructor
        virtual ~Cure();

        virtual Cure* clone() const = 0;
    	virtual void use(ICharacter& target);
};

#endif