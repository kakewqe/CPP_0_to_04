/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:04:08 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:04:11 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout  << this->_type  <<  " : Constructor (WrongAnimal) Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &o)
{
    std::cout << this->_type  << " : Constructor de copie (WrongAnimal) Called" << std::endl;
    this->_type = o._type;
}


WrongAnimal::~WrongAnimal()
{
    std::cout << this->_type << ": Destructor (WrongAnimal) Called" << std::endl;
}

void    WrongAnimal::setStr(std::string const str)
{
    this->_type = str;
    return;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &o)
{   
    std::cout  << this->_type << " : Operateur d'affectaton (WrongAnimal) = called." << std::endl;
    if(this != &o)
        this->_type = o._type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << this->_type << " : ARGGGGGGGGGGGGGG ! " << std::endl;
}