/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:03:29 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:03:32 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << this->_type << " : Constructor (Cat) Called" << std::endl;
}


Cat::~Cat()
{
    std::cout << this->_type << " : Destructor  (Cat)  Called" << std::endl;
}

Cat::Cat(const Cat &o) : Animal(o)
{
    std::cout << this->_type << " : Constructor  (Cat)  Called" << std::endl;
}

Cat &Cat::operator=(const Cat &o)
{
    if (this != &o) 
    { 
        std::cout << " Operator (Cat) = called." << std::endl;
	    Animal::operator=(o);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->_type << ": Miaaaaaaaouuuuuuu !" << std::endl;
}
