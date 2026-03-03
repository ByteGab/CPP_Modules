/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:42:08 by gafreire          #+#    #+#             */
/*   Updated: 2026/03/02 18:50:14 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
    
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name), _grade(cpy._grade)
{
    
}

Bureaucrat::Bureaucrat &operator=(const Bureaucrat &cpy) : 
{
    
}

~Bureaucrat()
{
    
}
std::string getName() const;      
int getGrade() const;
void incrementGrade();
void decrementGrade();