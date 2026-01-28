/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:16:39 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/28 20:10:36 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

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