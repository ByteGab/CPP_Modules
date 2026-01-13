/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:19:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/13 12:12:42 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;
public:
    // constructor default
    Fixed();
    // constructor int
    Fixed(const int value);
    // constructor float
    Fixed(const float value);
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

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif