/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:59:53 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:18:05 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (const std::string name) : _name(name)
{
    std::cout << "-----------------------------" << std::endl;
    std::cout << get_name() << " Constructor call" << std::endl;
    std::cout << "-----------------------------" << std::endl;

}

Zombie::~Zombie()
{
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << get_name() << " Destructor call" << std::endl;
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
