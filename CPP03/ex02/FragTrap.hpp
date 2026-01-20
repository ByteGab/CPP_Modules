/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:52:37 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/20 16:01:13 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    // constructor default
    FragTrap(void);
    // constructor
    FragTrap(std::string name);
    // copy Constructor
    FragTrap(const FragTrap &cpy);
    // operator overload
    FragTrap &operator=(const FragTrap &cpy);
    // destructor
    ~FragTrap();

    void highFivesGuys(void);
};




#endif