/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:03:04 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:03:07 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << this->_type << " : Constructor (Animal) Called" << std::endl;
}

Animal::Animal(const Animal &o)
{
    std::cout << this->_type  << " : Constructor de copie (Animal) Called" << std::endl;
    this->_type = o._type;
}


Animal::~Animal()
{
    std::cout << this->_type << ": Destructor (Animal) Called" << std::endl;
}

void    Animal::setStr(std::string const str)
{
    this->_type = str;
    return;
}

std::string Animal::getType() const
{
    return (this->_type);
}

Animal &Animal::operator = (const Animal &o)
{   
    std::cout  << this->_type << " : Operator (Animal) = called." << std::endl;
    if(this != &o)
        this->_type = o._type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << this->_type << " : GRRRRRRRRRRRRRRRR ! " << std::endl;
}