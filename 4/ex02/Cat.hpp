/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:07:03 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:53 by zachamou         ###   ########.fr       */
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
        void    setIdeas(std::string ideas);
        virtual void makeSound() const;
};
