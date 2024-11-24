/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:35:48 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/12 18:15:23 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
    this->_name = "Defaut";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_dmg = 30;
    std::cout << "FlagTrap  Constructor Called : " << _name << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_dmg = 30;
    std::cout << "FlagTrap  Constructor Called : " << _name << std::endl;
}

FlagTrap::FlagTrap(FlagTrap const &o): ClapTrap(o)
{
    std::cout << "FlagTrap Constructor copie Called : " << _name << std::endl;
}

FlagTrap  &FlagTrap::operator=(const FlagTrap &o)
{
    if (this != &o) 
    { 
        std::cout << "FlagTrap Operator= called" << std::endl;
	    ClapTrap::operator=(o);
    }
    return (*this);
}

void FlagTrap::attack(const std::string &target)
{
    if(_energy_points <= 0)
    {
        std::cout << "FlagTrap : (" <<this->_name << ") has no energy to attack" << std::endl;
        return;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "FlagTrap : (" << this->_name << "), DEAD !!! " << std::endl;
        return;
    }
    else
    {
        this->_energy_points -= 1;
        std::cout << "FlagTrap : (" << this->_name << "), ATTACK (" << target << ") causing " << this->_hit_points << " points of damage he has left " << this->_energy_points << " energy points" << std::endl;
        return;
    }
}

void FlagTrap::highFivesGuys(void) 
{
    std::srand(std::time(0));
    if(std::rand() % 2 == 0)
        std::cout << "FlagTrap : (" << this->_name << ") HEY HighFives guys here i am again my connection had crashed every sry, road tto kill the Drak" <<std::endl;
    else
         std::cout << "FragTrap: HEY (" << this->_name << ") HEY HighFives guys here i  AFK BIO" << std::endl;
}

FlagTrap::~FlagTrap()
{
    std::cout << "FlagTrap Destructor Called : " << _name << std::endl;
}

