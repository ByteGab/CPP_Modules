/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:38:03 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/11 19:02:47 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define GRAY    "\033[90m"

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
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            this->debug();
             /* fall through */
        case 1:
            this->info();
             /* fall through */
        case 2:
            this->warning();
             /* fall through */
        case 3:
            this->error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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