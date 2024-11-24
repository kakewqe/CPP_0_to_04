/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:34:52 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/12 17:56:57 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp" 
#include <cstdio>

int test1(void)
{
    std::cout << std::string(40, '#') << " TEST 1 " << std::string(40, '#') << std::endl << std::endl ;
    ClapTrap Hummais("Hummais");
    ClapTrap Orc("Orc");
    ScavTrap Dragon("Dragon");
    
    std::cout << std::endl;
    //humain attq
    Hummais.setDommage(5);
    Hummais.attack(Dragon.getName());
    Orc.setDommage(30);
    Orc.attack(Dragon.getName());
    //Orc attq
    Dragon.takeDamage(Hummais.getDommage());
    Dragon.takeDamage(Orc.getDommage());
    //humain attq
    Hummais.setDommage(6);
    Hummais.attack(Dragon.getName());
    Hummais.attack(Orc.getName());
    Orc.takeDamage(Hummais.getDommage());
    Dragon.takeDamage(Hummais.getDommage());
    //Orc attq
    Orc.setDommage(10);
    Orc.attack(Dragon.getName());
    Dragon.takeDamage(Orc.getDommage());
    //Dragon.takeDamage(Orc.getDommage());
    //Dragon attq
    Dragon.attack(Hummais.getName());
    Hummais.takeDamage(Dragon.getDommage());
    Hummais.takeDamage(Dragon.getDommage());
    //Orc.takeDamage(Dragon.getDommage());
    Dragon.beRepaired(50);
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}


int test2(void)
{
    std::cout << std::string(30, '#') << " TEST 2 (Fonction orthodox) " << std::string(30, '#') << std::endl << std::endl ;
    ScavTrap scav1("Scav 1");
    ScavTrap scav2("Scav 2");
    ScavTrap scavOriginal("OriginalScav");
    ScavTrap copyScav(scavOriginal);

    std::cout << std::endl;
    std::cout << "Avant l'operation daffectation (ScavTrap) : " << std::endl;
    scav1.attack("Target");
    scav2.attack("Target");
    copyScav.attack("Target");

    scav1.setDommage(50);

    std::cout << std::endl;
    scav2 = scav1;
    std::cout << std::endl;
    
    std::cout << "Après l'operation daffectation (ScavTrap) : " << std::endl;
    scav1.attack("Target");
    scav2.attack("Target");

    std::cout << std::endl;
    return 0;
}



int main(void)
{
    test1();
    std::cout << std::endl << std::string(88, '#') << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    test2();
    std::cout << std::endl << std::string(88, '#') << std::endl;
    return (0);
}