/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:39:56 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/08 10:26:40 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
    Phonebook phonebook;
    std::string menu;
    
    while (menu != "EXIT")
    {
        std::getline(std::cin, menu);
        if (menu == "ADD")
            phonebook.add_contact();
        else if (menu == "SEARCH")
            phonebook.search_contact();
        if (std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }
    }
    return (0);
}