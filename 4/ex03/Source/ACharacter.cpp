/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:08:22 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:08:23 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../Includ/ACharacter.hpp"
#include "../Includ/AMateria.hpp"
#include <string>

class AMateria;

int ACharacter::conteur = 0;

ACharacter::ACharacter()
{
    std::cout << "(ICharacter) Constructor Called " << std::endl;
    this->_name = "Default";
    for(int i = 0; i < 4; i++) 
        this->_inventary[i] = NULL;
}

ACharacter::ACharacter(std::string name)
{
    //std::cout << "(ICharacter) Constructor Called " << std::endl;
    this->_name = name;
    for(int i = 0; i < 4; i++)
    {    
        this->_inventary[i] = NULL;
    }
}

ACharacter::ACharacter(const ACharacter &o)
{
    for(int i = 0; i < 4; i++)
        delete _inventary[i];
    for(int i = 0; i < 4; i++)
    {
        if(o._inventary[i] != NULL)
            this->_inventary[i] = o._inventary[i];
    }
}

ACharacter &ACharacter::operator = (const ACharacter &o)
{
    
    if(this != &o)
    {
        for(int i = 0; i < 4; i++)        
        {
            delete _inventary[i];
            _inventary[i] = NULL;
        }

        for(int i = 0; i < 4; i++)
        {
            if(o._inventary[i] != NULL)
                this->_inventary[i] = o._inventary[i];
        }
    }
    return *this;
}

ACharacter::~ACharacter()
{
     //std::cout << "(ACharacter) Destructor Called " << std::endl;
    int i = 0; 
    while(i < 4)
    {
        //delete this->_inventary[i];
        i++;
    }
}

std::string ACharacter::getIventary_index(int i)
{
    if (_inventary[i] != NULL)
        return _inventary[i]->getType(); 
    return "Empty"; 
}

void  ACharacter::getIventary() 
{
    std::cout << "(ACharacter): Iventarty " << this->getName() << ":" << std::endl;
    int i = 0;
    while (i < 4)
    {
        if(_inventary[i] != NULL)
            std::cout << "Item in " << i << " : (" << getIventary_index(i) << ") inventary "<< std::endl;
        else
            std::cout << "Item in " << i << " : (Empty) inventary "<< std::endl;
        i++;
    }
}

std::string const &ACharacter::getName() const
{
    return _name;
}

void ACharacter::setName(std::string  name)
{
    this->_name = name;
}

void ACharacter::equip(AMateria *m)
{
    int i = 0;

    while (i < 4)
    {
        if(_inventary[i] == NULL)
        {
            _inventary[i] = m;
            return;
        }
        i++;
    }
    return;
}

void ACharacter::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    if(_inventary[idx] != NULL)
    {
        _ground[conteur] = _inventary[idx];
        _inventary[idx] = NULL;
        conteur++;
        return;
    }
    return;
}

void    ACharacter::use(int idx, ICharacter& target)
{
    if ((idx < 0 || idx > 3))
        return;
    else
    {   
        if(this->_inventary[idx] != NULL)
            this->_inventary[idx]->use(target);
    }
    return;
}

void    ACharacter::delet_ground()
{
    for(int i = 0; i < 4; i++)
        delete _ground[i];
    return;
}
