/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:08:46 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:08:48 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includ/Ice.hpp"

Ice::Ice() 
{
    //std::cout << "(Ice) Constructor Called " << std::endl;
    this->_type = "ice";
}

Ice::Ice(std::string const &type)
{
    //std::cout << "(Ice) Constructor of overloading string Called " << std::endl;
    this->_type = type;
}

Ice* Ice::clone() const 
{
    Ice *clone = new Ice();
    return (clone);
} 

Ice::Ice(const Ice &o)  : AMateria(o)
{
   this->_type = o._type;    
}


void Ice::use(ICharacter  &type)
{
    std::cout << "* shoots an ice bolt at " << type.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "(Ice) Desctructor Called" << std::endl;
}

Ice &Ice::operator = (const Ice &o)
{
    if(this != &o)
        this->_type = o._type;
    return *this;
}
