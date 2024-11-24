/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:08:53 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:08:54 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includ/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    //std::cout << "(MateriaSource) Constructor Called " << std::endl;
    for(int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
        this->_clone[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator =(const  MateriaSource &o)
{
    if(this != &o)
    {
        for(int i = 0; i < 4; i++)
            delete this->_materias[i];
        for(int i = 0; i < 4; i++)
            this->_materias[i] = o._materias[i];
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria*m)
{
    //std::cout << "(MateriaSource) learnMateria" << std::endl;
    int i = 0;
    while(i < 4)
    {   
        if(_materias[i] == NULL)
        {
            this->_materias[i] = m;
            return;
        }
        i++;
    }
    std::cout << "(MateriaSource) current is Full" << std::endl;
    return;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    //std::cout << "(MateriaSource) createMateria" << std::endl;
    int i = 0;
    while(i < 4) 
    {
        if(this->_materias[i] != NULL && this->_materias[i]->getType() == type)
        {
            this->_clone[i] = this->_materias[i]->clone();
            return this->_clone[i];
        }
        i++;
    }
    std::cout << "* Unknown type *" << std::endl;
    return (0);
}

MateriaSource::MateriaSource(const MateriaSource &o)
{
    for(int i = 0; i < 4; i++)
        this->_materias[i] = o._materias[i];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {

        delete _clone[i];
        _clone[i] = NULL;
        delete _materias[i];
        _materias[i] = NULL;
    }
}