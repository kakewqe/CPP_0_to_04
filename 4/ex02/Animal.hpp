/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:04:46 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:36 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdlib.h>     
#include "Brain.hpp"

class Animal 
{
    public :
        
        virtual ~Animal();
        virtual void makeSound() const = 0;
        
        static int nombreDeInstance();
        virtual void setStr(std::string str);
        virtual std::string getType() const;
        
        virtual Brain          *getBrain() const;
        virtual std::string    getBrainIdeas(int index) const;
        virtual void           setIdeas(std::string ideas);
    
    protected :
    
        Animal();
        Animal(const Animal &o);
        Animal &operator=(const Animal &o);
        std::string     _type;
        static int      conteur;
        Brain           *_brain;
};

std::ostream &operator<<(std::ostream &os, const Brain &brain);