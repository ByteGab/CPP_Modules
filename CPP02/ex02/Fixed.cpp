/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:19:19 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/13 18:58:42 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    
}
Fixed::Fixed(const int value)
{
    this->_value = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    this->_value = roundf(value *(1 << _fractionalBits));
}
Fixed::Fixed(const Fixed &cpy)
{
    *this = cpy;
}

Fixed &Fixed::operator=(const Fixed &cpy)
{
    if (this != &cpy)
        this->_value =  cpy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;

}
int Fixed::getRawBits(void) const
{
    return (this->_value);
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

// comparasion operators
bool    Fixed::operator>(const Fixed &cpy) const
{
    return (this->getRawBits() > cpy.getRawBits());   
}

bool    Fixed::operator<(const Fixed &cpy) const
{
    return (this->getRawBits() < cpy.getRawBits());   
}

bool    Fixed::operator>=(const Fixed &cpy) const
{
    return (this->getRawBits() >= cpy.getRawBits());   

}

bool    Fixed::operator<=(const Fixed &cpy) const
{
    return (this->getRawBits() <= cpy.getRawBits());   
}

bool    Fixed::operator==(const Fixed &cpy) const
{
    return (this->getRawBits() == cpy.getRawBits());   
}

bool    Fixed::operator!=(const Fixed &cpy) const
{
    return (this->getRawBits() != cpy.getRawBits());   
}

// aritmetics operators
Fixed   Fixed::operator+(const Fixed &cpy) const
{
    return (Fixed(this->toFloat() + cpy.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &cpy) const
{
    return (Fixed(this->toFloat() - cpy.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &cpy) const
{
    return (Fixed(this->toFloat() * cpy.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &cpy) const
{
    return (Fixed(this->toFloat() / cpy.toFloat()));
}

// increment / decrement
Fixed   &Fixed::operator++(void)
{
    this->_value++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value++;
    return (tmp);
}

 Fixed   &Fixed::operator--(void)
{
    this->_value--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value--;
    return (tmp);
}

// static functions

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);   
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}