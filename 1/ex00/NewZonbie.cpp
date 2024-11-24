/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZonbie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:59:15 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 22:59:19 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(const std::string name)
{
    Zombie* tmp = new Zombie(name);
    return  tmp;
}

void init_heap_zombie(void)
{
    std::cout << "(HEAP) Enter name Zombie :";
    std::string name;
    std::cin >> name;
    Zombie *heap_zombie = newZombie(name);
    std::cin.clear();
    while (std::cin.get() != '\n');
    heap_zombie->set_name(name);
    put_announce(*heap_zombie);
    delete heap_zombie;
}
