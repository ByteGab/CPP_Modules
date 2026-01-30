/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:46:16 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 11:44:39 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
   std::cout << GREEN << "Brain has been constructed!" << RESET << std::endl;
}
Brain::Brain(const Brain &cpy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = cpy.ideas[i];
    
    std::cout << CYAN << "Brain Copy Constructor called" << RESET << std::endl;
}
Brain &Brain::operator=(const Brain &cpy)
{
    if (this != &cpy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = cpy.ideas[i];
    }
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << RED << "Brain has been destroyed." << RESET << std::endl;
}

void Brain::setIdea(int index,  std::string idea)
{
      if (index >= 0 && index < 100)
        this->ideas[index] = idea;  
}
std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return (this->ideas[index]);
    return ("Idea out of range");
}