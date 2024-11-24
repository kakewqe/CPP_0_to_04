/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_op.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:19:09 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:19:11 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&  Fixed::operator= (const Fixed &a)
{
    if(this != &a)
        _value = a._value;
    return *this;
}

std::ostream    &operator << (std::ostream &std_out, const Fixed &value)
{
    
    std_out << value.toFloat();
    return (std_out);
}

bool   Fixed::operator == (const Fixed &other) const
{
    if(this->toFloat() == other.toFloat())
        return (true);
    return (false);
}

bool   Fixed::operator != (const Fixed &other) const
{
    if(this->toFloat() != other.toFloat())
        return (true);
    return (false);
}

bool   Fixed::operator < (const Fixed &other) const
{
    if(this->toFloat() < other.toFloat())
        return (true);
    return (false);
}

bool   Fixed::operator > (const Fixed &other) const
{
    if(this->toFloat() > other.toFloat())
        return (true);
    return (false);
}

bool   Fixed::operator <= (const Fixed &other) const
{
    if(this->toFloat() <= other.toFloat())
        return (true);
    return (false);
}

bool   Fixed::operator >= (const Fixed &other) const
{
    if(this->toFloat() >= other.toFloat())
        return (true);
    return (false);
}

Fixed  Fixed::operator +(const Fixed &other) const
{
    return (this->toFloat() + other.toFloat());
}

Fixed  Fixed::operator -(const Fixed &other) const
{
    return (this->toFloat() - other.toFloat());
}

Fixed  Fixed::operator *(const Fixed &other) const
{
    return (this->toFloat() * other.toFloat());
}
 
Fixed  Fixed::operator /(const Fixed &other) const
{
    return (this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
    _value += espilon;   
    return(*this);
}

Fixed& Fixed::operator--()
{
    _value -= espilon;   
    return(*this);
}


Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    _value += espilon;   
    return(temp);
}


Fixed Fixed::operator--(int)
{
     Fixed temp = *this; 
    _nb -= espilon;   
    return(temp);
}





