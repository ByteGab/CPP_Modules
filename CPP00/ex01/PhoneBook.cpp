/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:20:42 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/07 18:50:51 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::add_contact(void)
{
    Phonebook libro;
    std::string prueba;

    prueba = "";    
    if (this->index > 7)
        std::cout << "ERROR" << std::endl;
    std::cout << "Introduce un nombre" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un nombre valido" << std::endl;
    }
    libro.contacts[0].set_first_name(prueba);
        
    std::cout << "Introduce los apellidos" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir unos apellidos validos" << std::endl;
    }
    libro.contacts[0].set_last_name(prueba);
    
    std::cout << "Introduce un nickname" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un nickname valido" << std::endl;
    }
    libro.contacts[0].set_nickname(prueba);
    
    std::cout << "Introduce un numero de telefono" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un numero de telefono" << std::endl;
    }
    libro.contacts[0].set_phone_number(prueba);
    
    std::cout << "Introduce un dark secret" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un numero de telefono" << std::endl;
    }
    libro.contacts[0].set_darkest_secret(prueba);

    std::cout << libro.contacts[0].get_first_name() << libro.contacts[0].get_last_name() << libro.contacts[0].get_nickname() << libro.contacts[0].get_phone_number() << libro.contacts[0].get_darkest_secret() << std::endl;
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