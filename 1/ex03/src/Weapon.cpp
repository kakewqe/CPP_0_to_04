
#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string name) : _name_arme(name)
{
    //std::cout << "Consturctor called" << std::endl;
}

Weapon::~Weapon() 
{
    //std::cout << "Destructor called" << std::endl;
}

void    Weapon::setType(const std::string name_arme)
{
    this->_name_arme = name_arme;
}

const std::string&  Weapon::getType() 
{
    return this->_name_arme;
}
