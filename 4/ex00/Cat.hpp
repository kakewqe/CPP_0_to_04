/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:03:38 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:03:40 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"

class Cat : public Animal
{
    public :

        Cat();
        ~Cat();
        Cat(const Cat &o);
        Cat &operator = (const Cat &o);
        virtual void makeSound() const;
};