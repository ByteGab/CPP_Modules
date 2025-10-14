/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:27:55 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/13 09:48:17 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:
    Contact _contacts[8];
    int     _index;
    int     _count;
public:
    void add_contact(void);
    void search_contact(void);
    Phonebook();
    ~Phonebook();
};

#endif