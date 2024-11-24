/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 00:24:29 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:32 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int Animal::conteur = 0;

Animal::Animal() : _type("Defaut")
{
    std::cout  << this->_type << ": Constructor (Animal) Called" << std::endl;
    conteur++;
}

Animal::~Animal()
{
    std::cout  << this->_type << ": Destructor (Animal) Called" << std::endl;
    conteur--;
    //delete this->_brain;
}


Animal::Animal(const Animal &o)
{
    this->_type = o._type;
    std::cout << this->_type  << ": Constructor de copy (Animal) Called" << std::endl;
}

Animal &Animal::operator = (const Animal &o)
{   
    if(this != &o)
        this->_type = o._type;
    return (*this);
    std::cout  << this->_type << ": Operator (Animal) = called." << std::endl;
}

void    Animal::setIdeas(std::string ideas)
{
    std::cout  << this->_type << ": Set the idea in (Animal) = called." << std::endl;
    for(int i = 0; i < _brain->get_nb() ; i++)
        this->_brain->getIdieas(0) = ideas;
}

void Animal::makeSound() const
{
    std::cout << this->_type << " : GRRRRRRRRRRRRRRRR ! " << std::endl;
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

int Animal::nombreDeInstance()
{
    return (conteur);
}

Brain *Animal::getBrain() const 
{
    return (this->_brain);
}

std::string Animal::getBrainIdeas(int index) const
{
    if(_brain)
        return (this->_brain->getIdieas(index));
    return "";
}

std::ostream &operator<<(std::ostream &os, const Brain &brain);