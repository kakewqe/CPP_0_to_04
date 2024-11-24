/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:01:01 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/09 19:02:37 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zonbie_horde = new Zombie[N];
    std::cout << std::endl ;
    
    int i = 0;
    while (i < N) 
    {     
        std::cout << "Enter name ZOombi :" ;
        std::cin.clear();
        std::cin >> name;
        std::cin.clear();
        zonbie_horde[i].set_name(name);
        i++;
    }
    return zonbie_horde;
}

void init_heap_zombie(int N)
{
    Zombie *HordZombie = zombieHorde(N, "");
    
    int i = 0;
    while (i < N) 
    {     
        put_announce(HordZombie[i]);
        i++;
    }
    delete[] HordZombie;
}

