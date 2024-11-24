/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:59:42 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 22:59:46 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void ramdomeChump(std::string name)
{
    Zombie stack_zombie(name);
    stack_zombie.set_name(name);
    put_announce(stack_zombie);
    return;
}

void init_stack_zombie(void)
{
    std::string name;
    std::cout << "(STACK) Enter name Zombie :";
    std::cin >> name;
    ramdomeChump(name);
    while (std::cin.get() != '\n');
    return;
}
