/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:35:13 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/12 18:04:15 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    public :

        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &o);
        ScavTrap &operator = (const ScavTrap &o);
        
        ~ScavTrap();
        void guardGate();
        
        virtual void    attack(const std ::string &target); 
};

