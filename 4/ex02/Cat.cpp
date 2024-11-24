/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:06:56 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:48 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << _type << ": Constructor (Cat) Called" << std::endl;
    this->_brain = new Brain();
    if (this->_brain == NULL)
    {
        std::cerr << "Memory allocation failed!" << std::endl;
        exit(1);
    }
    this->_type = "Cat";
}

Cat::~Cat()
{
    std::cout << _type << ": Destructor  (Cat)  Called" << std::endl;
    delete _brain;
}

void Cat::setIdeas(std::string ideas)
{
    this->_brain->setIdeas(ideas); 
}

Cat::Cat(const Cat &o) : Animal(o)
{
    std::cout << _type << ": Constructor Copy (Cat) Called" << std::endl;
    this->_type = o._type;
    this->_brain = new Brain();
    if (this->_brain == NULL)
    {
        std::cerr << "Memory allocation failed!" << std::endl;
        exit(1);
    }
}

Cat &Cat::operator=(const Cat &o)
{
    if (this != &o) 
    { 
        Animal::operator=(o);
        std::cout << _type << ": Operator affeactation (Cat) = called." << std::endl;
        this->_type = o._type;
        this->_brain = new Brain();
        if (this->_brain == NULL)
        {
            std::cerr << "Memory allocation failed!" << std::endl;
            exit(1);
        }
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->_type << ": Miaaaaaaaouuuuuuu !" << std::endl;
}
