/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:04:24 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:04:28 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout  << this->_type << " : Constructor (WrongCat) Called" << std::endl;
}


WrongCat::~WrongCat()
{
    std::cout << this->_type <<  " : Destructor (WrongCat)  Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &o) : WrongAnimal(o)
{
    std::cout << this->_type <<  " : Constructeurr de copie (WrongCat)  Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &o)
{
    if (this != &o) 
    { 
        std::cout << this->_type <<  " : Operateur d'affectation (WrongCat) = called." << std::endl;
	    WrongAnimal::operator=(o);
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << this->_type << ": whaaaouuuuuuuuyy !" << std::endl;
}
