/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:06:08 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/12 21:03:17 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << GRAY << "[ DEBUG ] " << RESET;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << BLUE << "[ INFO ] " << RESET;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "[ WARNING ] " << RESET;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "[ ERROR ] " << RESET;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*pointers[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    int i = 0;
    
    while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*pointers[i])();
            break;
        }
        i++;
    }
}

Harl::Harl()
{
    std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destroyed" << std::endl;
}