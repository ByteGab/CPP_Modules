/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:37:10 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/28 19:46:52 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        // constructor default
        Ice(void);
        // assignment operator
        Ice(const Ice &cpy);
        // operator overload
        Ice &operator=(const Ice &cpy);
        // destructor
        virtual ~Ice();

        virtual Ice* clone() const = 0;
    	virtual void use(ICharacter& target);
};

#endif