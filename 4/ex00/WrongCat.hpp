/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:04:32 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:04:34 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :

        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &o);
        WrongCat &operator = (const WrongCat &o);
        void makeSound() const;
};