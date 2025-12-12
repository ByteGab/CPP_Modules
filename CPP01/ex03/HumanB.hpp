/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:07:59 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 18:41:57 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name; 
public:
    void attack();
    void setWeapon(Weapon &weapon);
    HumanB(std::string name);
    ~HumanB();
};
