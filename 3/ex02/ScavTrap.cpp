/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:36:16 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/12 18:09:17 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <stdlib.h>     

ScavTrap::ScavTrap()
{
    this->_name = "Defaut";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_dmg = 20;
    std::cout << "ScavTrap Constructor Called : " << _name << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_dmg = 20;
    std::cout << "ScavTrap Constructor Called : " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &o): ClapTrap(o)
{
    std::cout << "ScavTrap Constructor copie Called : " << _name << std::endl;
}

ScavTrap  &ScavTrap::operator=(const ScavTrap &o)
{
    if (this != &o) 
    { 
        std::cout << "ScavTrap Operator= called" << std::endl;
	    ClapTrap::operator=(o);
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if(_energy_points <= 0)
    {
        std::cout << "ScavTrap : (" <<this->_name << ") has no energy to attack" << std::endl;
        return;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap : (" << this->_name << "), DEAD !!! " << std::endl;
        return;
    }
    else
    {
        this->_energy_points -= 1;
        std::cout << "ScavTrap : (" << this->_name << "), ATTACK (" << target << ") causing " << this->_hit_points << " points of damage he has left " << this->_energy_points << " energy points" << std::endl;
        return;
    }
}

void ScavTrap::guardGate()
{
    if(_energy_points <= 0)
    {
        std::cout << this->_name << "has no energy to guard" << std::endl;
        return;
    }
    else if(this->_hit_points <= 0)
    {
        std::cout << "ScavTrap : (" << this->_name << "), 0 points of life for guard" << std::endl;
        return;
    }
    std::cout << "ScavTrap : (" << this->_name << "), Guard !!!" << std::endl;
    this->_energy_points -= 1;


}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called : " << _name << std::endl;
}
