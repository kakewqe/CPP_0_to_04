/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:07:23 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:25:04 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test()
{
        std::cout << std::string(50, '#') << std::endl;
        std::cout << std::string(20, ' ')  << "(test 1)" << std::string(20, ' ')  << std::endl;
        std::cout << std::string(50, '#') << std::endl;
        const int nbOfAnimals = 2;  
        
        Animal *Animal[nbOfAnimals];
    
        std::cout << std::endl;

        for(int i = 0; i < nbOfAnimals; i++)
        {
            if(i % 2 == 0)
                Animal[i] = new Dog();
            else
                Animal[i] = new Cat();
            if(Animal[i] == NULL)
                exit(1);
        }

        std::cout << std::endl;                                                                                                            
        std::cout << std::endl;                                                                                                            
        int index_idea = 100;                                                                                                              
        std::cout << std::string(50, '-') << std::endl;
        std::cout << "Idea of index "<<  Animal[1]->getType() << ":" << Animal[1]->getBrainIdeas(index_idea) << std::endl;
        index_idea = -10;
        std::cout << "Idea of index "<<  Animal[1]->getType() << ":" << Animal[1]->getBrainIdeas(index_idea) << std::endl;
        index_idea = 1;
        std::cout << "Idea of index "<<  Animal[1]->getType() << ": " << Animal[1]->getBrainIdeas(index_idea) << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;    
        std::cout << std::string(50, '-') << std::endl;
        int identity_Animal_0 = 0;
        int identity_Animal_1 = 1;
        std::cout << "Displaying all ideas in Animal " << identity_Animal_0 << *Animal[identity_Animal_0]->getBrain() << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Displaying all ideas in Animal " << identity_Animal_1 << *Animal[identity_Animal_1]->getBrain() << std::endl;
        std::cout << std::string(50, '-') << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;    
        std::cout << std::string(50, '-') << std::endl;
        Animal[0]->setIdeas("Je veux jouer !!!");
        Animal[1]->setIdeas("J'ai fains !!!");
        int index_ideas_0 = 15;
        int index_ideas_1 = 58;
        std::cout << "Idea at " << index_ideas_0 << " index of " << Animal[0]->getType() <<  " : " << Animal[0]->getBrainIdeas(index_ideas_0) << std::endl;
        std::cout << "Idea at " << index_ideas_1 << " index of " << Animal[1]->getType() << " : " << Animal[1]->getBrainIdeas(index_ideas_1) << std::endl;
        std::cout << std::string(50, '-') << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::string(50, '-') << std::endl;
        Animal[0]->makeSound();
        Animal[1]->makeSound();
        std::cout << std::string(50, '-') << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Number of Moms instance before destroy : " << Animal::nombreDeInstance() << std::endl;
        std::cout << std::endl;
        for(int i = 0; i < nbOfAnimals; i++)
            delete Animal[i];
        std::cout << std::endl;
        std::cout << "Number of Moms instance after destroy : " << Animal::nombreDeInstance() << std::endl;
}

void test1()
{
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(20, ' ')  << "(test 1)" << std::string(20, ' ')  << std::endl;
    std::cout << std::string(50, '#') << std::endl;
  
    //construction default et construction de copy
    Dog  *dog1 = new Dog();
    Dog   dog = *dog1;

    //construction default et construction d'affectaion
    Cat  *cat = new Cat();
    Cat  cat_2(*cat);

    std::cout << std::endl;

    std::cout << dog1->getType() << " " << std::endl;
    std::cout << dog1->getType() << " " << std::endl;

    std::cout << cat->getType() << " " << std::endl;
    std::cout << cat_2.getType() << " " << std::endl;
    
    std::cout << std::endl;
    
    dog.setStr("Dog 1");
    dog1->setStr("Dog 2");
    
    std::cout << std::endl;
    
    std::cout << "Dog avec le constructeur de copy"<< std::endl;
    std::cout << "Avec idea par defaut"<< std::endl;
    std::cout << dog.getBrain()->getIdieas(0) << std::endl;
    std::cout << dog1->getBrain()->getIdieas(0) << std::endl;
    dog1->setIdeas("bonjours");
    dog.setIdeas("ciao");
    std::cout << "Apres le setIdea"<< std::endl;
    std::cout << dog.getBrain()->getIdieas(0) << std::endl;
    std::cout << dog1->getBrain()->getIdieas(0) << std::endl;

    std::cout << std::endl;
    
    std::cout << "Cat avec l'operateur d'affectaton"<< std::endl;
    std::cout << "Avec idea par defaut :"<< std::endl;
    std::cout << cat->getBrain()->getIdieas(0) << std::endl;
    std::cout << cat_2.getBrain()->getIdieas(0) << std::endl;
    std::cout << "Apres le setIdea"<< std::endl;
    cat->setIdeas("heyy");
    cat_2.setIdeas("coucou");
    std::cout << cat->getBrain()->getIdieas(0) << std::endl;
    std::cout << cat_2.getBrain()->getIdieas(0) << std::endl;
    

    std::cout << std::endl;
    
    delete cat;
    delete dog1;
    return;
}

int main()
{
    test();
    std::cout << std::endl;
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(50, '#') << std::endl;
    test1();
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(50, '#') << std::endl;

    return 0;
}