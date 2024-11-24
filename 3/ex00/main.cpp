/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:34:13 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/12 18:04:43 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void test1()
{
    std::cout << std::string(40, '#') << " TEST 1 " << std::string(40, '#') << std::endl << std::endl ;
    ClapTrap Hummais("Hummais");
    ClapTrap Orc("Orc");
    
    std::cout << std::endl;

    Hummais.setDommage(5);
    Hummais.attack(Orc.getName());
    Orc.takeDamage(Hummais.getDommage());
    Hummais.setDommage(2);
    Hummais.attack(Orc.getName());
    Orc.takeDamage(Hummais.getDommage());
    Orc.setDommage(7);

    Orc.attack(Hummais.getName());
    Hummais.takeDamage(Orc.getDommage());
    Orc.setDommage(10);
    Orc.attack(Hummais.getName());
    Hummais.takeDamage(Orc.getDommage());
    Orc.beRepaired(5);
    Hummais.attack(Orc.getName());
    return;
}

void test2()
{
    std::cout << std::string(30, '#') << " TEST 2 (Fonction orthodox) " << std::string(30, '#') << std::endl << std::endl ;
    ClapTrap clap1("Clap 1");
    ClapTrap clap2("Clap 2");
    std::cout << std::endl;
    ClapTrap original("OriginalClap");
    ClapTrap copyClap(original); 
    std::cout << std::endl;

    clap1.setDommage(10);
    std::cout << "Avant l'operationk daffectation : " << std::endl;    
    clap1.attack("Target");
    clap2.attack("Target");
    clap2.attack("Target");
    clap2.attack("Target");
    copyClap.attack("Target");
    std::cout << std::endl;

    clap1.setName("CLAP");

    std::cout << std::endl;
    clap2 = clap1;
    std::cout << std::endl;

    std::cout << "Apres l'operation daffectation :  " << std::endl;
    clap1.attack("Target");
    clap2.attack("Target");
    return;
}

int main(void)
{
    test1();
    std::cout << std::endl << std::string(89, '#') << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    test2();
    std::cout << std::endl << std::string(89, '#') << std::endl;


    return (0);
}