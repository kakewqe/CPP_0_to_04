/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:08:39 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:08:42 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includ/Cure.hpp"
#include "../Includ/AMateria.hpp"

Cure::Cure() 
{
    this->_type = "cure";
}

Cure::Cure(std::string const &type)
{
    this->_type = type;
}

Cure* Cure::clone() const 
{
    return (new Cure(*this));
}

Cure::Cure(const Cure &o) : AMateria(o)
{
    this->_type = o._type;   
}

void Cure::use(ICharacter  &type)
{
        std::cout << "* heals " << type.getName() <<" wounds *"  << std::endl;
}

Cure::~Cure()
{
    std::cout << "(Cure) Desctructor Called" << std::endl;
}


Cure &Cure::operator = (const Cure &o)
{
    if(this != &o)
        this->_type = o._type;
    return *this;
}
