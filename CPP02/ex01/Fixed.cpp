/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:19:19 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/13 12:18:23 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value *(1 << _fractionalBits));
}
Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed &Fixed::operator=(const Fixed &cpy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &cpy)
        this->_value =  cpy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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