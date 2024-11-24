/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:06:50 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:44 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string.h>
#include <iostream>

class Brain 
{   
    public :

        Brain();
        Brain(std::string ideas);
        Brain(const Brain &o);
        Brain& operator = (const Brain &o);
        ~Brain();
        
        std::string         getIdieas(int i) const ; 
        static int          get_nb();
        void                setIdeas(std::string ideas);
        void                displayIdeas();
    
    protected :
    
        std::string         _ideas[100];
        static const int    _nb = 100;
};

