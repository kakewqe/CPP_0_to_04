/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_utils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:19:23 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:19:25 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float Fixed::toFloat(void) const
{
    return (float)this->_value / (float)(1 << _fixed_point_number);
}

int Fixed::toInt(void) const
{
    return _value >> _fixed_point_number;
}

const Fixed& Fixed::max(Fixed &fixed_a, Fixed &fixed_b)
{
    if(fixed_a > fixed_b)
        return (fixed_a);
    return (fixed_b);
}


const Fixed& Fixed::max(Fixed const &fixed_a, Fixed const &fixed_b)
{
    if(fixed_a > fixed_b)
        return (fixed_a);
    return (fixed_b);
}



const Fixed& Fixed::min(Fixed &fixed_a, Fixed &fixed_b)
{
    if(fixed_a < fixed_b)
        return (fixed_a);
    return (fixed_b);
}

const Fixed& min(Fixed &fixed_a, Fixed &fixed_b)
{
    if(fixed_a < fixed_b)
        return (fixed_a);
    return (fixed_b);
}


