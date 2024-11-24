/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:33:57 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/12 18:03:05 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::takeDamage(unsigned int amount)
{    
    
    if (this->_hit_points == 0)
    {
        std::cout << "ClapTrap : (" << this->_name << "), DEAD !!! " << std::endl;
        return;
    }
    if(this->_hit_points <= amount)
    {
        this->_hit_points = 0;
        std::cout << "ClapTrap : (" << this->_name << "), TAKE " << amount << ", points of damages and so he died" << std::endl;
        return;
    }
    else
    {   
        this->_hit_points -= amount;
        std::cout << "ClapTrap : (" << this->_name << "), TAKE " << amount << ", points of damages, he has " << this->_hit_points << " life points"<< std::endl;
        return;
    }
}

void ClapTrap::attack(const std::string &target)
{
    
    if(this->_hit_points <= 0)
    {
        std::cout << "ClapTrap : (" << this->_name << "), DEAD !!! " << std::endl;
        return;
    }
    else if(_energy_points <= 0)
    {
        std::cout << "ClapTrap : (" <<this->_name << ") has no energy to attack" << std::endl;
        return;
    }
    else
    {
        this->_energy_points -= 1;
        std::cout << "ClapTrap : (" << this->_name << "), ATTACK (" << target << ") causing " << this->_attack_dmg << " points of damage he has left " << this->_energy_points << " energy points" << std::endl;
        return;
    }
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points > 0)
    {
        this->_energy_points -= 1;
        this->_hit_points += amount;
        std::cout << "ClapTrap : (" << this->_name << "), repaired " << amount << ", points of life, he a " << this->_hit_points << " life points"<< std::endl;

    }
    else if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap : (" <<this->_name << ") has no energy to repaire" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap : (" << this->_name << "), DEAD !!! " << std::endl;
        return;
    }
}