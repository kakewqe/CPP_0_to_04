/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_utils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:14:41 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:14:43 by zachamou         ###   ########.fr       */
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

