/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:01:10 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:01:13 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse de la string en mémoire    = " << &str << std::endl;
    std::cout << "Adresse de la stringPTR en mémoire = " << &stringPTR << std::endl;
    std::cout << "Adresse de la stringPTR en mémoire = " << &stringREF << std::endl;
    
    std::cout << std::endl;

    std::cout << "Valeur de la string                = " << str << std::endl;
    std::cout << "Valeur pointée par stringPTR       = " << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF       = " << stringREF << std::endl;
    
}