/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:19:57 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:19:59 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

//Constructeur surcharge de int en paramattre 
Fixed::Fixed(const int a)
{
    //std::cout << "Constructor INT called " << std::endl;
    this->_value = a << this-> _fixed_point_number;
}

Fixed::Fixed(const float a)
{    
    //std::cout << "Constructor FLOAT called " << std::endl; 
    this->_value = roundf(a * (1 << _fixed_point_number));
}

// Constructeur de recopie
Fixed::Fixed(const Fixed &other)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;
}


int Fixed::getRawBits() const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::abs() const
{
    return fabs(this->toFloat());
}

Fixed::~Fixed() 
{
    //std::cout << "Destructor called" << std::endl;
}
