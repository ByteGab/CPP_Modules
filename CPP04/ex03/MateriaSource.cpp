/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:44:32 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 10:55:19 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        _templates[i] = NULL;
    std::cout << GREEN << "MateriaSource has been constructed!" << RESET << std::endl;   
}
MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    for (int i = 0; i < 4; i++)
    {
        if (cpy._templates[i])
            this->_templates[i] = cpy._templates[i]->clone();
        else
            this->_templates[i] = NULL;
    }
    std::cout << CYAN << "MateriaSource Copy Constructor called" << RESET << std::endl;
 
}

MateriaSource &MateriaSource::operator=(const MateriaSource &cpy)
{
    if (this != &cpy)
    {
        for (int i = 0; i < 4; i++)
        {
           if (this->_templates[i])
                delete this->_templates[i];
            this->_templates[i] = NULL;
        }
        
        for (int i = 0; i < 4; i++)
        {
            if (cpy._templates[i])
                this->_templates[i] = cpy._templates[i]->clone();
            else
                this->_templates[i] = NULL;   
        }
    }
    
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if(_templates[i])
            delete _templates[i];   
    }
    std::cout << RED << "MateriaSource has been destroyed." << RESET << std::endl;
}
void		MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_templates[i] == NULL)
        {
            _templates[i] = m;
            return;
        }
    }
    std::cout << "MateriaSource is full!" << std::endl;
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_templates[i] && _templates[i]->getType() == type)
            return _templates[i]->clone();
    }
    return (0);
}