/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:28:00 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/22 13:11:38 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    // constructor default
    DiamondTrap(void);
    // constructor
    DiamondTrap(std::string name);
    // copy Constructor
    DiamondTrap(const DiamondTrap &cpy);
    // operator overload
    DiamondTrap &operator=(const DiamondTrap &cpy);
    // destructor
    ~DiamondTrap();

    void whoAmI();
    void attack(const std::string& target);

};

#endif