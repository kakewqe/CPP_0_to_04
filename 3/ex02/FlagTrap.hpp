/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:35:55 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 21:35:57 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include <ctime>   

class FlagTrap : public ClapTrap
{
    public:
        FlagTrap();
        FlagTrap(std::string name);
        FlagTrap(const FlagTrap &o);
        FlagTrap &operator = (const FlagTrap &o);
        
        ~FlagTrap();
        void highFivesGuys(void);

        virtual void    attack(const std ::string &target); 

};