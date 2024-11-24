/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:34:46 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 21:34:49 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdlib.h>     

class ClapTrap
{
    public :
        
        ClapTrap();
        ClapTrap(std::string name); 
        ClapTrap(const ClapTrap &o);
        ClapTrap &operator = (const ClapTrap &o);
        ~ClapTrap();

        void            setName(std::string name);
        std::string     getName() const;
        void            setDommage(int amount);
        int             getDommage() const;

        virtual void    attack(const std ::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        
    
    protected :
       
        std::string               _name;
        unsigned int             _hit_points;
        unsigned int             _energy_points;
        unsigned int             _attack_dmg;

};
