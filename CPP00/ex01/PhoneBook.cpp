/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:20:42 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/07 13:31:32 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
    Phonebook libro;
    // libro.("Gabriel","Freire","gafreire","6238420424","gallego");

    libro.search_contact();
    return (0);
}

void Phonebook::add_contact(void)
{
    Contact contact;
    
    if (this->index > 7)
        std::cout << "ERROR" << std::endl;
    
}
void Phonebook::search_contact(void)
{
    int i;

    i = 0;
    if (this->index == 0)
        std::cout << "PhoneBook empty" << std::endl;
    while (i < this->index)
    {
         std::cout << this->contacts[i].get_first_name() << " " << this->contacts[i].get_last_name() << " " <<  this->contacts[i].get_nickname() << " " <<  this->contacts[i].get_phone_number() << " " <<  this->contacts[i].get_darkest_secret()  <<  " " << std::endl;
        i++;
    }
    this->index++;
}

Phonebook::Phonebook()
{
    this->index = 0;
}

Phonebook::~Phonebook()
{
}