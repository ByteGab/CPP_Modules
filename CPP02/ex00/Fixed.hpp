/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:19:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/13 11:49:34 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    /* data */
    int _value;
    static const int _fractionalBits = 8;
public:
    // constructor
    Fixed();
    Fixed(const Fixed &cpy);
    // operator overload
    Fixed &operator=(const Fixed &cpy);
    // destructor
    ~Fixed();
    // getter
    int  getRawBits(void) const;
    // setter
     void setRawBits(int const raw);
};

#endif