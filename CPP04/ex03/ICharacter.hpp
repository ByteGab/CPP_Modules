/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:54:37 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/28 22:44:43 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "iostream"
class AMateria;

class ICharacter
{
    public:
    	virtual	~ICharacter(void) {};
    	virtual std::string const	&getName() const = 0;
    	virtual void	equip(AMateria *m) = 0;
    	virtual void	unequip(int idx) = 0;
    	virtual void	use(int idx, ICharacter &target) = 0;
};

#endif