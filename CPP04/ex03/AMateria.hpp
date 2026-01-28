/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:16:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/28 19:57:03 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        // constructor default
        AMateria(void);
        // constructor
        AMateria(std::string const &type);
        // assignment operator
        AMateria(const AMateria &cpy);
        // operator overload
        AMateria &operator=(const AMateria &cpy);
        // destructor
        virtual ~AMateria();
    
        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
    	virtual void use(ICharacter& target);
};

#endif