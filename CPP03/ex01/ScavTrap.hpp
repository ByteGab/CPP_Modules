/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:38:21 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/20 12:21:37 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    // constructor default
    ScavTrap(void);
    // constructor
    ScavTrap(std::string name);
    // copy Constructor
    ScavTrap(const ScavTrap &cpy);
    // copy Constructor
    ScavTrap &operator=(const ScavTrap &cpy);
    // destructor
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};

# endif