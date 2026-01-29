/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:32:56 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/29 12:07:27 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];
    public:
        // constructor default
        Character(void);
        // constructor
        Character(std::string const &name);
        // assignment operator
        Character(const Character &cpy);
        // operator overload
        Character &operator=(const Character &cpy);
        // destructor
        virtual ~Character();
    
        virtual std::string const	&getName() const;
        virtual void	equip(AMateria *m);
        virtual void	unequip(int idx);
        virtual void	use(int idx, ICharacter &target);
};

#endif