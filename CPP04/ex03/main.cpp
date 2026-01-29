/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:14:16 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/29 21:20:37 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << BLUE << "=== TEST 1: SUBJECT (MANDATORY) ===" << RESET << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        ICharacter* me = new Character("me");
        
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        
        ICharacter* bob = new Character("bob");
        
        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob;
        delete me;
        delete src;
    }

    std::cout << std::endl << BLUE << "=== TEST 2: DEEP COPY & MEMORY MANAGEMENT ===" << std::endl;
    {
        Character* cloud = new Character("Cloud");

        AMateria* materia_suelta = new Ice(); 
        
        cloud->equip(materia_suelta);
        cloud->equip(new Cure());

        Character* cloud_clone = new Character(*cloud);
        cloud->unequip(0); 
        
        delete materia_suelta;

        std::cout << YELLOW << "--- The clone tries to use his magic (it should work) ---" << std::endl;
        std::cout << "If it were Shallow Copy, the clone would fail because we erased the original material" << RESET << std::endl;
        
        cloud_clone->use(0, *cloud); 
        cloud_clone->use(1, *cloud);

        delete cloud;
        delete cloud_clone;
    }
    return 0;
}