/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:09:00 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:09:02 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includ/AMateria.hpp"
#include "Includ/Cure.hpp"
#include "Includ/Ice.hpp"
#include "Includ/MateriaSource.hpp"
#include "Includ/ACharacter.hpp"
#include "Includ/ICharacter.hpp"

int main(void)
{
      IMateriaSource* src = new MateriaSource();
      src->learnMateria(new Ice());
      src->learnMateria(new Cure());
      ICharacter* me = new ACharacter("me");
      
      std::cout << "..............................." << std::endl;
      std::cout << "- (test 0) Display equiped ME -" << std::endl;
      std::cout << "..............................." << std::endl;

      AMateria* tmp;
      tmp = src->createMateria("cure");
      me->equip(tmp);
      tmp = src->createMateria("ice1");
      me->equip(tmp);
      tmp = src->createMateria("ic54e");
      me->equip(tmp);
      tmp = src->createMateria("ice");
      me->equip(tmp);
      tmp = src->createMateria("Test");
      me->equip(tmp);

      std::cout << "..............................." << std::endl;

      std::cout << std::endl;
      std::cout << std::endl;
        
      ICharacter* bob = new ACharacter("bob");
      //Display
      std::cout << "......................................" << std::endl;
      std::cout << "- (test 1) Display ME Use in equiped -" << std::endl;
      std::cout << "......................................" << std::endl;

      me->use(0, *bob);
      me->use(1, *bob);
      me->use(1477, *bob);
    
      std::cout << "......................................" << std::endl;

      std::cout << std::endl;
      std::cout << std::endl;
      
      //Display
      std::cout << "......................................." << std::endl;
      std::cout << "- (test 2) Display BOB use no equiped ." << std::endl;
      std::cout << "......................................." << std::endl;

      for(int i = 0; i < 1; i++)
        bob->use(i, *bob);
      std::cout << std::endl;
      std::cout << std::endl;

      std::cout << "......................................." << std::endl;
      
      std::cout << std::endl;
      std::cout << std::endl;
      
      std::cout << "......................................." << std::endl;
      std::cout << "- (test 3) Display BOB use in equiped -" << std::endl;
      std::cout << "......................................." << std::endl;

    AMateria *Materia[4];
    
    std::cout << "Cration and initialization og the next test " << std::endl;

    for(int i = 0; i < 4; i++)
    {
        if(i % 2 == 0)
          Materia[i] = new Ice();
        else
          Materia[i] = new Cure();
    }

    for(int i = 0; i < 4; i++)
    {
        if(i % 2 == 0)
          bob->equip(Materia[i]);
        else
          bob->equip(Materia[i]);
    }
    
    for(int i = 0; i < 4; i++)
      bob->use(i, *bob);

    std::cout << "......................................." << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << ".............................................." << std::endl;
    std::cout << "- (test 4) Display BOB uniquiped and equiped -" << std::endl;
    std::cout << ".............................................." << std::endl;

    bob->unequip(2);
    //bob->delet_ground();
    bob->equip(Materia[1]);

    bob->unequip(0);
    //bob->delet_ground();
    bob->equip(Materia[1]);

    for(int i = 0; i < 4; i++)
      bob->use(i, *bob);

    std::cout << ".............................................." << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(Materia[i])
          delete  Materia[i];
    }

    delete bob;
    delete me;
    delete src;
}