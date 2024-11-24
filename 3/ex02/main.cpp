/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:36:01 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 21:36:04 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp" 
#include "FlagTrap.hpp"


void test1()
{
    std::cout << std::string(40, '#') << " TEST 1 " << std::string(40, '#') << std::endl << std::endl ;
    ClapTrap Hummais("Hummais");
    ClapTrap Orc("Orc");
    ScavTrap Dragon("Dragon");
    FlagTrap Worgen("Worgen");

    std::cout << std::endl;
    
    //humain attq
    Hummais.setDommage(30);
    Hummais.attack(Dragon.getName());
    Dragon.takeDamage(Hummais.getDommage());

    //Orc attq
    Orc.setDommage(50);
    Orc.attack(Dragon.getName());
    Dragon.takeDamage(Orc.getDommage());
    
    //humain attq
    Hummais.setDommage(10);
    Hummais.attack(Dragon.getName());
    Orc.takeDamage(Orc.getDommage());
    
    //Orc attq
    Orc.setDommage(10);
    Orc.attack(Dragon.getName());
    Dragon.takeDamage(Orc.getDommage());

    //Robot attq
    //Scav.guardGate();
    Dragon.attack(Hummais.getName());
    Dragon.attack(Orc.getName());
    Hummais.takeDamage(Dragon.getDommage());
    Orc.takeDamage(Dragon.getDommage());

    Dragon.beRepaired(50);

    Worgen.highFivesGuys();
    Worgen.attack(Dragon.getName());
    Dragon.takeDamage(Worgen.getDommage());
    Dragon.beRepaired(50);
    
    std::cout << std::endl;
    std::cout << std::endl;

    return;
}

void test2()
{
    std::cout << std::string(30, '#') << " TEST 2 (Fonction orthodox) " << std::string(30, '#') << std::endl << std::endl ;
    FlagTrap Flagv1("Flag 1");
    FlagTrap Flagv2("Flag 2");
    FlagTrap scavOriginal("OriginalFlag");
    FlagTrap copyScav(scavOriginal);

    std::cout << std::endl;
    std::cout << "Avant l'operation daffectation (FlagTrap) : " << std::endl;
    Flagv1.attack("Target");
    Flagv2.attack("Target");
    Flagv1.highFivesGuys();


    Flagv1.setDommage(50);

    std::cout << std::endl;
    Flagv1 = Flagv2;
    std::cout << std::endl;
    
    std::cout << "Après l'operation daffectation (FlagTrap) : " << std::endl;
    Flagv1.attack("Target");
    Flagv2.attack("Target");

    std::cout << std::endl;
    return;
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