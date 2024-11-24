/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:00:31 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/09 19:06:19 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string.h>

void put_announce(Zombie &put)
{
    std::cout << std::endl;
    put.announce();
    std::cout << std::endl;

}

int verif_cin(int N)
{
    if(isdigit(N) == false)
            return 1;
    return 0;

}

int main(void)
{
    int N = 0;

    std::cout << "Choose number of zombie :" << std::endl;

    while(1)
    {
        if(std::cin >> N)
        {
            if (N < 0) 
            {  
                std::cout << "Value is negatif." << std::endl;
                break;
            } 
            if(verif_cin(N) == 0)
                init_heap_zombie(N);
            else
            {
                std::cout << "bad Value" << std::endl;
                break;
            }
        }
        else
        {
            std::cout << "Error : Fatal" << std::endl;
            break;
        }
        std::cout << "Choose number of zombie :" << std::endl;
    }
    return (0);
}