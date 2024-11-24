/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:03:53 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:03:55 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"

class Dog : public Animal
{
    public :

        Dog();
        ~Dog();
        Dog(const Dog &o);
        Dog &operator = (const Dog &o);
        virtual void makeSound() const;
};