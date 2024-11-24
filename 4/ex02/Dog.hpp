/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:07:16 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:59 by zachamou         ###   ########.fr       */
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
        void    setIdeas(std::string ideas);
        virtual void makeSound() const;
};