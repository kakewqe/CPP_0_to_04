/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:07:10 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:56 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor (Dog) Called" << std::endl;
    this->_brain = new Brain();
    if(_brain == NULL)
        exit(1);
    this->_type = "Dog"; 
}

Dog::~Dog()
{
    std::cout << this->_type << ": Destructor (Dog) Called" << std::endl;
    delete _brain;
}

void Dog::setIdeas(std::string ideas)
{
    this->_brain->setIdeas(ideas); 
}

Dog::Dog(const Dog &o) : Animal(o)
{
    std::cout << "Constructor Copy (Dog) Called" << std::endl;
    this->_type = o._type;
    this->_brain = new Brain();
    if (this->_brain == NULL)
    {
        std::cerr << "Memory allocation failed!" << std::endl;
        exit(1);
    }
}


Dog &Dog::operator=(const Dog &o)
{
    if (this != &o) 
    { 
        Animal::operator=(o);
        std::cout  << this->_type << ": Operator affeactation (Dog) = called." << std::endl;
        this->_type = o._type;
        if (this->_brain == NULL)
        {
            std::cerr << "Memory allocation failed!" << std::endl;
            exit(1);
        }
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->_type << " : WOaf wouAF wouaf !" << std::endl;
}

