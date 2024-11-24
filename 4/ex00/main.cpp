/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:04:00 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:04:02 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test()
{
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(20, ' ')  << "(test 0)" << std::string(20, ' ')  << std::endl;
    std::cout << std::string(50, '#') << std::endl;

    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
    const Animal* x = new Animal();
    const Animal* j = new Dog();
    const Animal* y = new Cat();


    std::cout << std::endl << std::endl;

    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << x->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << y->getType() << " " << std::endl;

    std::cout << std::endl << std::endl;

    meta->makeSound();
    i->makeSound();
    x->makeSound();
    j->makeSound();
    y->makeSound();

    std::cout << std::endl << std::endl;

    delete y;
    delete j;
    delete x;
    delete i;
    delete meta;
    return;
}


void test1()
{
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(20, ' ')  << "(test 1)" << std::string(20, ' ')  << std::endl;
    std::cout << std::string(50, '#') << std::endl;

    Animal meta_1;
    Dog    dog;
    Cat    cat;

    std::cout << std::endl;
    std::cout << meta_1.getType() << " " << std::endl;
    std::cout << dog.getType() << " " << std::endl;
    std::cout << cat.getType() << " " << std::endl;

    std::cout << std::endl;
    
    dog.setStr("Dog 1");
    meta_1.makeSound();
    dog.makeSound();
    cat.setStr("Garfild");
    cat.makeSound();
    Dog a(dog);
    a.setStr("Dog 2");
    a.makeSound();
    Dog b = a;
    b.setStr("Dog 3");
    b.makeSound();
    std::cout << std::endl;

    return;
}


void test2()
{
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(20, ' ')  << "(test 2)" << std::string(20, ' ')  << std::endl;
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(50, '-') << std::endl;
    Animal meta_1;
    Animal meta_2(meta_1);
    std::cout << std::endl;

    std::cout << std::endl;
    meta_2.setStr("Defaut 2");
    std::cout << "test : Du constructeur de copie pour (Animal)" << std::endl;
    std::cout << meta_1.getType() << " " << std::endl;
    std::cout << meta_2.getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << "test : De l'operateur d'affectaion (Animal)" << std::endl;
    meta_1 = meta_2 ;
    std::cout << meta_1.getType() << " " << std::endl;
    std::cout << std::string(50, '-') << std::endl;
    std::cout << std::endl;
    Dog Dog_1;
    Dog Dog_2(Dog_1);
    std::cout << std::endl;
    std::cout << std::endl;
    Dog_2.setStr("Defaut 2");
    std::cout << "test : Du constructeur de copie pour (Dog)" << std::endl;
    std::cout << Dog_1.getType() << " " << std::endl;
    std::cout << Dog_2.getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << "test : De l'operateur d'affectaion (Dog)" << std::endl;
    Dog_1.setStr("Scoubidou");
    Dog_2 = Dog_1 ;
    std::cout << Dog_1.getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << std::string(50, '-') << std::endl;
    std::cout << std::endl;
    Cat Cat_1;
    Cat Cat_2(Cat_1);
    std::cout << std::endl;


    std::cout << std::endl << std::endl;
    Cat_1.setStr("Defaut 2");
    std::cout << "test : Du constructeur de copie pour (Cat)" << std::endl;
    std::cout << Cat_1.getType() << " " << std::endl;
    std::cout << Cat_2.getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << "test : De l'operateur d'affectaion (Cat)" << std::endl;
    Cat_1.setStr("Miaouss");
    Cat_2 = Cat_1 ;
    std::cout << Cat_2.getType() << " " << std::endl;
    std::cout << std::endl;
    return;
}



int main()
{
    test();
    std::cout << std::endl;
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(50, '#') << std::endl;

    std::cout << std::endl;
    test1();
    std::cout << std::endl;
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(50, '#') << std::endl;

    std::cout << std::endl;
    test2();
    std::cout << std::endl;
    std::cout << std::string(50, '#') << std::endl;
    std::cout << std::string(50, '#') << std::endl;

    std::cout << std::endl;
    return 0;
}