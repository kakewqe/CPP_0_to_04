#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    //std::cout << "Consturctor called HumB " << std::endl;
}

HumanB::~HumanB(){}

void    HumanB::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}