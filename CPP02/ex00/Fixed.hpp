/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:19:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/12 13:17:57 by gafreire         ###   ########.fr       */
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
    static const int _fractional;
public:
    // constructor
    Fixed();
    Fixed(const Fixed &cpy);
    // operator overload
    Fixed &operator=(const Fixed cpy);
    // destructor
    ~Fixed();
    // getter
    int  getRawBits(void) const;
    // setter
     void setRawBits(int const raw);
};

#endif