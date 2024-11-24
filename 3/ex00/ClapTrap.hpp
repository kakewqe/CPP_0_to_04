/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:34:04 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 21:34:06 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap 
{
    public:
        
        ClapTrap();
        ClapTrap(std::string name); 
        ClapTrap(const ClapTrap &o);
        ClapTrap &operator = (const ClapTrap &o);
        ~ClapTrap();   
        
        void            setName(std::string name);
        std::string     getName() const;
        void            setDommage(int amount);
        int             getDommage() const;

        void            attack(const std ::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        
    
    private:
       
        std::string               _name;
        unsigned int             _hit_points;
        unsigned int             _energy_points;
        unsigned int             _attack_dmg;

};