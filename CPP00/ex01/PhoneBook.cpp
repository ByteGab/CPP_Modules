/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:20:42 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/08 16:29:38 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::add_contact(void)
{
    std::string input;

    input = "";    
    std::cout << "Introduce un nombre" << std::endl;
    while (!std::getline(std::cin,input)|| input.empty())
    {
        if (std::cin.eof())
            return ;
        std::cout << "Vuelve a introducir un nombre valido" << std::endl;
    }
    this->contacts[this->index].set_first_name(input);
        
    std::cout << "Introduce los apellidos" << std::endl;
    while (!std::getline(std::cin,input)|| input.empty())
    {
        if (std::cin.eof())
            return ;
        std::cout << "Vuelve a introducir unos apellidos validos" << std::endl;
    }
    this->contacts[this->index].set_last_name(input);
    
    std::cout << "Introduce un nickname" << std::endl;
    while (!std::getline(std::cin,input)|| input.empty())
    {
        if (std::cin.eof())
            return ;
        std::cout << "Vuelve a introducir un nickname valido" << std::endl;
    }
    this->contacts[this->index].set_nickname(input);
    
    std::cout << "Introduce un numero de telefono" << std::endl;
    while (!std::getline(std::cin,input)|| input.empty())
    {
        if (std::cin.eof())
            return ;
        std::cout << "Vuelve a introducir un numero de telefono" << std::endl;
    }
    this->contacts[this->index].set_phone_number(input);
    
    std::cout << "Introduce un dark secret" << std::endl;
    while (!std::getline(std::cin,input)|| input.empty())
    {
        if (std::cin.eof())
            return ;
        std::cout << "Vuelve a introducir un dark secret" << std::endl;
    }
    this->contacts[this->index].set_darkest_secret(input);
    if (this->count < 8)
        this->count++;
    std::cout << "Created a new contact: "<< this->contacts[this->index].get_first_name() << " (" << this->count << "/8)" << std::endl;
    this->index = (this->index + 1) % 8;
}

static std::string add_spaces(int size)
{
    if (size <= 0) 
        return (std::string());
    std::string str;
    while (size--) 
        str.append(" ");
    return (str);
}

static std::string fix_width(const std::string& str, unsigned long max)
{
    std::string t;
    if (str.size() > max) 
    {
        std::string t = str.substr(0, max);
        if (max > 0) 
            t[max - 1] = '.';
        return (t);
    }
    return (str);
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
    i = (this->index - this->count + i + 8) % 8;
    while (i < this->count)
    {
        // índice físico en el array circular
        int phi = (this->index - this->count + i + 8) % 8;
        
        std::string col = std::string(1, static_cast<char>('0' + (i + 1)));
        col = fix_width(col, 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // ----- Columna: First Name -----
        col = fix_width(this->contacts[phi].get_first_name(), 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // ----- Columna: Last Name -----
        col = fix_width(this->contacts[phi].get_last_name(), 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // ----- Columna: Nickname -----
        col = fix_width(this->contacts[phi].get_nickname(), 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // Cierre de fila
        std::cout << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        i++;
    }
    
    i = 0;
    std::cout << std::endl;
     while (!std::cin.eof())
     {
        std::cout << "Select an index (1-" << this->count << "): " << std::endl;
        if (std::getline(std::cin, prueba) && prueba != "")
        {
            if (prueba.size() == 1 && prueba[0] >= '1' && prueba[0] <= '8' && this->contacts[prueba[0] - 1 - '0'].get_first_name().size())
                break;
        }
        else
            std::cout << "Invalid index contact" << std::endl;         
     }
    if (!std::cin.eof())
    {
        int selected = (prueba[0] - '0') - 1;
        // convierte índice lógico a físico
        int phi = (this->index - this->count + selected + 8) % 8;

        // muestra los 5 campos del contacto
        std::cout << "First Name: " << this->contacts[phi].get_first_name() << std::endl;
        std::cout << "Last Name: " << this->contacts[phi].get_last_name() << std::endl;
        std::cout << "Nickname: " << this->contacts[phi].get_nickname() << std::endl;
        std::cout << "Phone Number: " << this->contacts[phi].get_phone_number() << std::endl;
        std::cout << "Darkest Secret: " << this->contacts[phi].get_darkest_secret() << std::endl;
    }
        
}

Phonebook::Phonebook()
{
    this->index = 0;
    this->count = 0;
}

Phonebook::~Phonebook()
{
}