/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:38:28 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/13 09:49:26 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    // data
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
public:
    //setter
    void set_first_name(std::string first_name);
    void set_last_name(std::string last_name);
    void set_nickname(std::string nickname);
    void set_phone_number(std::string phone_number);
    void set_darkest_secret( std::string darkest_secret);
    // getter
    std::string get_first_name()const;
    std::string get_last_name()const;
    std::string get_nickname()const;
    std::string get_phone_number()const;
    std::string get_darkest_secret()const;
    // constructor empty
    Contact();
    // destructor
    ~Contact();
};

#endif