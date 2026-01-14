/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:19:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/14 16:04:38 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int     _value;
    static const int    _fractionalBits = 8;
public:
    // constructor
    Fixed();
    // copy constructor
    Fixed(const Fixed &cpy);
    // operator overload
    Fixed &operator=(const Fixed &cpy);
    // destructor
    ~Fixed(); 
    // setter
     void setRawBits(int const raw);
    // getter
    int  getRawBits(void) const;
};

#endif