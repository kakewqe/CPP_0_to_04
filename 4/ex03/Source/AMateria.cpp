/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:08:31 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:08:32 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includ/AMateria.hpp"

AMateria::AMateria() 
{
    //std::cout << "(AMateria) Constructor Called " << std::endl;
    this->_type = "no type";
}

AMateria::AMateria(std::string const &type)
{
    //std::cout << "(AMateria) Constructor of overloading string Called " << std::endl;
    this->_type = type;
}

/*
AMateria::AMateria(const AMateria &o)  
{
    this->_type = o._type;   
}
*/

std::string const & AMateria::getType() const
{
    return (_type);
}


AMateria::~AMateria()
{
     std::cout << "(AMateria) Desctructor Called" << std::endl;
}