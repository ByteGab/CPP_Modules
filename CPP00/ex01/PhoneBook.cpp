/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:20:42 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/13 12:53:22 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int checkIsAlpha(const std::string &str)
{
    size_t i; 

    i = 0;

    while (i < str.size())
    {
        if (!std::isalpha(str[i]))
            return (1);
        i++;
    }
    return (0);
}

int checkIsNbr(const std::string &str)
{
    size_t i; 

    i = 0;

    while (i < str.size())
    {
        if (!std::isdigit(str[i]))
            return (1);
        i++;
    }
    return (0);
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

void Phonebook::add_contact(void)
{
    std::string input;

    input = "";
        
    std::cout << "\033[1;32m📛 Enter a name: \033[0m";
    while (!std::getline(std::cin,input)|| input.empty() || checkIsAlpha(input))
    {
        if (std::cin.eof())
            return ;
        std::cout << "\033[1;31m❌ Please enter a valid name: \033[0m";
    }
    this->_contacts[this->_index].set_first_name(input);
        
    std::cout << "\033[1;32m🧾 Enter the last name(s): \033[0m";
    while (!std::getline(std::cin,input)|| input.empty() || checkIsAlpha(input))
    {
        if (std::cin.eof())
            return ;
        std::cout << "\033[1;31m❌ Please enter valid last names: \033[0m";
    }
    this->_contacts[this->_index].set_last_name(input);
    
    std::cout << "\033[1;36m🎭 Enter a nickname: \033[0m";
    while (!std::getline(std::cin,input)|| input.empty() || checkIsAlpha(input))
    {
        if (std::cin.eof())
            return ;
         std::cout << "\033[1;31m❌ Please enter a valid nickname: \033[0m";
    }
    this->_contacts[this->_index].set_nickname(input);
    
    std::cout << "\033[1;33m📞 Enter a phone number: \033[0m";
    while (!std::getline(std::cin,input)|| input.empty() || checkIsNbr(input))
    {
        if (std::cin.eof())
            return ;
        std::cout << "\033[1;31m❌ Please enter a valid phone number: \033[0m";
    }
    this->_contacts[this->_index].set_phone_number(input);
    
    std::cout << "\033[1;34m💀 Enter a dark secret: \033[0m";
    while (!std::getline(std::cin,input)|| input.empty() || checkIsAlpha(input))
    {
        if (std::cin.eof())
            return ;
        std::cout << "\033[1;31m❌ Please enter a valid dark secret: \033[0m";
    }
    this->_contacts[this->_index].set_darkest_secret(input);
    
    if (this->_count < 8)
        this->_count++;
    std::cout << "\n\033[1;32m✅ Successfully created a new contact:\033[0m "
              << "\033[1;36m" << this->_contacts[this->_index].get_first_name()
              << "\033[0m (" << this->_count << "/8)" << std::endl;
    this->_index = (this->_index + 1) % 8;
}

void Phonebook::search_contact(void)
{
    int i;
    int pos;
    int selected;
    std::string input;

    i = 0;
    if (this->_count == 0)
    {
        std::cout << "PhoneBook empty" << std::endl;
        return ;
    }
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    i = (this->_index - this->_count + i + 8) % 8;
    while (i < this->_count)
    {
        pos = (this->_index - this->_count + i + 8) % 8;
        
        // column index
        std::string col = std::string(1, static_cast<char>('0' + (i + 1)));
        col = fix_width(col, 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // column first name
        col = fix_width(this->_contacts[pos].get_first_name(), 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // column Last Name
        col = fix_width(this->_contacts[pos].get_last_name(), 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // columna nickname
        col = fix_width(this->_contacts[pos].get_nickname(), 10);
        std::cout << "|" << add_spaces(10 - static_cast<int>(col.size())) << col;
        
        // close contact
        std::cout << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        i++;
    }
    
    i = 0;
    std::cout << std::endl;
    // show contact
     while (!std::cin.eof())
     {
        std::cout << "\n\033[1;36m📇 Select an index (1-" << this->_count << "):\033[0m " << std::endl;
        if (std::getline(std::cin, input) && input != "")
        {
            if (input.size() == 1 && input[0] >= '1' && input[0] <= '8' && this->_contacts[input[0] - 1 - '0'].get_first_name().size())
                break;
        }
        else
            std::cout << "\033[1;31m❌ Invalid contact index.\033[0m" << std::endl;         
     }
    if (!std::cin.eof())
    {
        selected = (input[0] - '0') - 1;
        pos = (this->_index - this->_count + selected + 8) % 8;
        
        std::cout << "\n\033[1;32m═══════════════════════════════════════\033[0m" << std::endl;
        std::cout << "\033[1;32m📖 CONTACT CARD\033[0m" << std::endl;
        std::cout << "\033[1;32m═══════════════════════════════════════\033[0m\n" << std::endl;
        
        std::cout << "   \033[1;33m👤 First Name:\033[0m      " 
                  << this->_contacts[pos].get_first_name() << std::endl;
        std::cout << "   \033[1;33m🧾 Last Name:\033[0m       " 
                  << this->_contacts[pos].get_last_name() << std::endl;
        std::cout << "   \033[1;33m🎭 Nickname:\033[0m        " 
                  << this->_contacts[pos].get_nickname() << std::endl;
        std::cout << "   \033[1;33m📞 Phone Number:\033[0m    " 
                  << this->_contacts[pos].get_phone_number() << std::endl;
        std::cout << "   \033[1;33m💀 Darkest Secret:\033[0m  " 
                  << this->_contacts[pos].get_darkest_secret() << std::endl;
        
        std::cout << "\n\033[1;32m═══════════════════════════════════════\033[0m" << std::endl;
        std::cout << "\033[1;32m✅ End of contact details.\033[0m" << std::endl;
        std::cout << "\033[1;32m═══════════════════════════════════════\033[0m" << std::endl;
    }
        
}
// constructor
Phonebook::Phonebook()
{
    this->_index = 0;
    this->_count = 0;
}

Phonebook::~Phonebook()
{
}