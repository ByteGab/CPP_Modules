/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:20:42 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/08 10:23:21 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::add_contact(void)
{
    std::string prueba;

    prueba = "";    
    if (this->index > 7)
        std::cout << "ERROR" << std::endl;
    std::cout << "Introduce un nombre" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un nombre valido" << std::endl;
    }
    this->contacts[0].set_first_name(prueba);
        
    std::cout << "Introduce los apellidos" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir unos apellidos validos" << std::endl;
    }
    this->contacts[0].set_last_name(prueba);
    
    std::cout << "Introduce un nickname" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un nickname valido" << std::endl;
    }
    this->contacts[0].set_nickname(prueba);
    
    std::cout << "Introduce un numero de telefono" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un numero de telefono" << std::endl;
    }
    this->contacts[0].set_phone_number(prueba);
    
    std::cout << "Introduce un dark secret" << std::endl;
    while (!std::getline(std::cin,prueba)|| prueba.empty())
    {
        std::cout << "Vuelve a introducir un numero de telefono" << std::endl;
    }
    this->contacts[0].set_darkest_secret(prueba);

    std::cout << this->contacts[0].get_first_name() << this->contacts[0].get_last_name() << this->contacts[0].get_nickname() << this->contacts[0].get_phone_number() << this->contacts[0].get_darkest_secret() << std::endl;
    this->count++;
}
void Phonebook::search_contact(void)
{
    int i;
    std::string prueba;

    i = 0;
    if (this->count == 0)
    {
        std::cout << "PhoneBook empty" << std::endl;
        return ;
    }
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (i < this->count)
    {
         std::cout << this->contacts[i].get_first_name() << " " << this->contacts[i].get_last_name() << " " <<  this->contacts[i].get_nickname() << " " <<  this->contacts[i].get_phone_number() << " " <<  this->contacts[i].get_darkest_secret()  <<  " " << std::endl;
        i++;
    }

    std::cout << "Selecciona un contacto" << std::endl;
    i = 0;
     while (!std::cin.eof())
     {
        std::cout << "Select a index contact" << std::endl;
        if (std::getline(std::cin, prueba) && prueba != "")
        {
            if (prueba.size() == 1 && prueba[0] >= '1' && prueba[0] <= '8' && this->contacts[prueba[0] - 1 - '0'].get_first_name().size())
                break;
        }
        else
            std::cout << "Invalid index contact" << std::endl;         
     }
    //  if (!std::cin.eof())
        
}

Phonebook::Phonebook()
{
    this->index = 0;
}

Phonebook::~Phonebook()
{
}