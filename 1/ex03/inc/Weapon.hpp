/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:01:42 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:01:45 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{   
    private :
            std::string _name_arme;
    public :
    
        Weapon(const std::string name_arme);
        ~Weapon();
        const   std::string& getType();
        void    setType(std::string name_arme);

};

#endif