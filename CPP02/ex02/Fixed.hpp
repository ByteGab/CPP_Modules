/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:19:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/14 16:19:38 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int     _value;
    static const int    _fractionalBits = 8;
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
    // convert to float
    float toFloat(void) const;
    // convert to int
    int toInt(void) const;
    // comparasion operators
    bool    operator>(const Fixed &cpy) const;
    bool    operator<(const Fixed &cpy) const;
    bool    operator>=(const Fixed &cpy) const; 
    bool    operator<=(const Fixed &cpy) const; 
    bool    operator==(const Fixed &cpy) const;
    bool    operator!=(const Fixed &cpy) const; 
    // aritmetics operators
    Fixed   operator+(const Fixed &cpy) const;
    Fixed   operator-(const Fixed &cpy) const;
    Fixed   operator*(const Fixed &cpy) const;
    Fixed   operator/(const Fixed &cpy) const;
    // increment / decrement
    Fixed   &operator++(void);
    Fixed   operator++(int);
    Fixed   &operator--(void);
    Fixed   operator--(int);
    // static functions
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif