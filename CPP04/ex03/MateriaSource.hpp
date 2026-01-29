/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:16:54 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/29 20:08:40 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _templates[4];
public:
    // constructor default
    MateriaSource(void);
    // assignment operator
    MateriaSource(const MateriaSource &cpy);
    // operator overload
    MateriaSource &operator=(const MateriaSource &cpy);
    // destructor
    virtual ~MateriaSource();

    virtual void		learnMateria(AMateria *m);
	virtual AMateria*	createMateria(std::string const &type);
};

#endif