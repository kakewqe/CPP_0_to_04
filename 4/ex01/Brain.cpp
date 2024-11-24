/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:06:42 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/15 00:24:40 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor (Brain) Called" << std::endl;
    for(int i = 0; i < _nb; i++)
        this->_ideas[i] = "Hello word";
}   

Brain::Brain(std::string ideas)
{
    std::cout << "Constructor surchage de string (Brain) Called" << std::endl;
    for(int i = 0; i < _nb; i++)
        this->_ideas[i] = ideas;
}

Brain::Brain(const Brain &o)
{
    for(int i = 0; i < _nb; i++)
        this->_ideas[i] = o._ideas[i];
    std::cout << "Constructor de copy (Brain) Called" << std::endl;
}

void Brain::setIdeas(std::string ideas)
{
    for (int i = 0; i < _nb; i++)
        _ideas[i] = ideas;
}


Brain& Brain::operator = (const Brain &o)
{
    std::cout << "Operateur de d'affectation (Brain) Called" << std::endl;
    if(this != &o)
    {
        int i = 0;
        while(1)
        {
            if(o._ideas[i++] != "")
                break;
            this->_ideas[i] = o._ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdieas(int i) const
{
    if (i > -1 && i < _nb) 
        return _ideas[i];
    return " Invalid";;
}

int Brain::get_nb()
{
    return _nb;
}

Brain::~Brain() 
{
    std::cout << "Destructor Brain Called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Brain &brain)
{
    for (int i = 0; i < Brain::get_nb(); i++)
    {
        os << "Idea[" << i << "]: " << brain.getIdieas(i) << "\n";
    }
    return os;
}

