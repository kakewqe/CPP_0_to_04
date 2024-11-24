#pragma once
#include "ICharacter.hpp"
#include <iostream> 
#include <string>

class ICharacter;

class AMateria
{
    public:

        AMateria();
        AMateria(std::string const &type);
        AMateria(const ICharacter &o);
        virtual ~AMateria();     
        AMateria & operator = (const ICharacter &o);
        virtual AMateria* clone() const = 0;
        std::string const & getType() const;
        virtual void use(ICharacter& target) = 0;

    protected:
        
        std::string _type;
        

};
