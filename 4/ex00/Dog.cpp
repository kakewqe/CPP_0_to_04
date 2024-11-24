/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:03:45 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:03:47 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog"; 
    std::cout << this->_type << " : Constructor (Dog) Called" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->_type << ": Destructor (Dog) Called" << std::endl;
}

Dog::Dog(const Dog &o) : Animal(o)
{
    std::cout << this->_type  << ": Constructor de copie (Dog) Called" << std::endl;
}

Dog &Dog::operator=(const Dog &o)
{
    if (this != &o) 
    { 
        std::cout  << this->_type << ": Operator (Dog) = called." << std::endl;
	    Animal::operator=(o);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->_type << " : WOaf wouAF wouaf !" << std::endl;
}

