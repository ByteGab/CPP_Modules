/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:14:16 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/30 11:49:13 by gafreire         ###   ########.fr       */
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
        Character* paco = new Character("Paco");

        AMateria* trash = new Ice(); 
        
        paco->equip(trash);
        paco->equip(new Cure());

        Character* paco_clone = new Character(*paco);
        paco->unequip(0); 
        
        delete trash;

        std::cout << YELLOW << "--- The clone tries to use his magic (it should work) ---" << std::endl;
        std::cout << "If it were Shallow Copy, the clone would fail because we erased the original material" << RESET << std::endl;
        
        paco_clone->use(0, *paco); 
        paco_clone->use(1, *paco);

        delete paco;
        delete paco_clone;
    }
    return 0;
}