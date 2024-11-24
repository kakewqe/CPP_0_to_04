/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_op.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:14:29 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:14:32 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator= (const Fixed &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &a)
        _value = a._value;
    return *this;
}

std::ostream &operator << (std::ostream &std_out, const Fixed &value)
{
    
    std_out << value.toFloat();
    return (std_out);
}