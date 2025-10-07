/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:16:49 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/07 13:44:03 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// int main (void)
// {
//     Contact contact0;
//     contact0.set_contact("Gabriel","Freire","gafreire","6238420424","gallego");

//     std::cout << contact0.get_first_name() << " " << contact0.get_last_name() << " " <<  contact0.get_nickname() << " " <<  contact0.get_phone_number() << " " <<  contact0.get_darkest_secret()  <<  " " << std::endl;
//     return (0);
// }
 // setter

void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}
void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}
void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}
void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
// getter
std::string Contact::get_first_name()const
{
    return (this->first_name);
}
std::string Contact::get_last_name()const
{
    return (this->last_name);
}
std::string Contact::get_nickname()const
{
    return (this->nickname);
}
std::string Contact::get_phone_number()const
{
    return (this->phone_number);
}
std::string Contact::get_darkest_secret()const
{
    return (this->darkest_secret);
}

Contact::Contact()
{   
}
Contact::~Contact()
{
}
