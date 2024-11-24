#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
        public :

            Ice();
            Ice(std::string const &type);
            
            ~Ice();
            Ice(const Ice &o);
            Ice& operator = (const Ice &o);
            virtual Ice *clone() const;
            virtual void use(ICharacter& target);

};
