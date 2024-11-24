/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:00:20 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:00:23 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void put_announce(Zombie &put)
{
    std::cout << std::endl;
    put.announce();
}

int main(void)
{
    std::string str;

    std::cout << "choose or create zombie in memory : " << std::endl;
    std::cout << "Enter (HEAP) or (STACK)" << std::endl;
    
    while(1)
    {
        if(std::getline(std::cin, str).eof() == true)
        {
            std::cout << "Fatal : error" << std::endl;
            break;
        }
        if(str == "STACK")
        {
            init_stack_zombie();
            break;
        }
        else if(str == "HEAP")
        {

            init_heap_zombie();
            break;
        }
        std::cout << "Erro : bad input" << std::endl;
        std::cout << "Enter (HEAP) or (STACK)" << std::endl;
    }
    return (0);
}