/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:00:44 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:00:49 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name) : _name(name)
{
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Constructor call" << std::endl;
}

Zombie::Zombie ()
{
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Constructor call" << std::endl;
}

Zombie::~Zombie() 
{
 
    std::cout << "Destructor call" << std::endl;
    std::cout << "-----------------------------" << std::endl;

}

void Zombie::announce(void) const
{
    std::cout << _name <<" : BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    _name = name;
}

std::string    Zombie::get_name(void) const
{
    return _name;
}
