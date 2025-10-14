/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:16:49 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/13 09:50:22 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

 // setter
void Contact::set_first_name(std::string first_name)
{
    this->_first_name = first_name;
}
void Contact::set_last_name(std::string last_name)
{
    this->_last_name = last_name;
}
void Contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}
void Contact::set_phone_number(std::string phone_number)
{
    this->_phone_number = phone_number;
}
void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}
// getter
std::string Contact::get_first_name()const
{
    return (this->_first_name);
}
std::string Contact::get_last_name()const
{
    return (this->_last_name);
}
std::string Contact::get_nickname()const
{
    return (this->_nickname);
}
std::string Contact::get_phone_number()const
{
    return (this->_phone_number);
}
std::string Contact::get_darkest_secret()const
{
    return (this->_darkest_secret);
}

// constructor
Contact::Contact()
{   
}
Contact::~Contact()
{
}
