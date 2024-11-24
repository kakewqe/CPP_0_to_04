/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:04:17 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:04:19 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdlib.h>     

class WrongAnimal 
{
    public :
        
        WrongAnimal();
        WrongAnimal(const WrongAnimal &o);
        WrongAnimal &operator=(const WrongAnimal &o);
        virtual ~WrongAnimal();
        void makeSound() const;
        void setStr(std::string str);
        std::string getType() const;
    
    protected :
        std::string _type;
};