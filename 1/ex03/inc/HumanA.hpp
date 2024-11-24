/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:01:27 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:01:30 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string     _name;
        Weapon          &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack(void);
        void    setWeapon(Weapon weapon);

};

#endif