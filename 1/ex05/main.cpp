/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:03:42 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/09 19:22:08 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int ac, char **str) 
{
    if(ac != 2)
    {
        std::cout << "Enter just 1 argument" << std::endl;
        return 1;
    }
    Harl harl;
    std::string input = str[1];
    harl.complain(input);
    
    return 0;
}