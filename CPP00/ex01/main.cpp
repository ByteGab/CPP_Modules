/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:39:56 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/08 11:38:49 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string to_upper(std::string str)
{
    int size;
    int i;

    size = str.size();
    i = 0;
    while (i < size)
    {
        str[i] = (char)std::toupper(str[i]);
        i++;
    }
    return (str);
}
int main (void)
{
    Phonebook phonebook;
    std::string menu;
    
    while (menu != "EXIT")
    {
        std::cout << "\033[36mSelect an option: "
                 "\033[32mADD\033[36m, "
                 "\033[34mSEARCH\033[36m or "
                 "\033[31mEXIT\033[0m"
              << std::endl;
        std::getline(std::cin, menu);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }
        menu = to_upper(menu);
        if (menu == "ADD")
            phonebook.add_contact();
        else if (menu == "SEARCH")
            phonebook.search_contact();
    }
    return (0);
}