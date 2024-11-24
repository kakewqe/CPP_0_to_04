/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_bullid.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:33:49 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/12 17:56:32 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0) 
{
    std::cout << "Constructor Called : " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &o)
{
    std::cout << "Constructor copie Called : " << _name << std::endl;

    this->_name = o._name;
    this->_hit_points = o._hit_points;
    this->_energy_points = o._energy_points;
    this->_attack_dmg = o._attack_dmg;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &o)
{
    std::cout << "Operator = Called : " << _name << std::endl;

    if(this != &o)
    {
        this->_name = o._name;
        this->_hit_points = o._hit_points;
        this->_energy_points = o._energy_points;
        this->_attack_dmg = o._attack_dmg;
    }
    return (*this);
}


ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called : " << _name << std::endl;
}


std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

int ClapTrap::getDommage() const
{
    return this->_attack_dmg;
}

void ClapTrap::setDommage(int ammout)
{
    this->_attack_dmg = ammout;
}