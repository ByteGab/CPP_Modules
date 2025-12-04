/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:07:59 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/02 12:55:14 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name; 
public:
    void attack();
    HumanB(std::string name,Weapon *weapon);
    ~HumanB();
};
