#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
        public :

            Cure();
            Cure(std::string const &type);
            
            ~Cure();

            Cure(const Cure &o);
            Cure &operator = (const Cure &o);
            virtual Cure *clone() const;
            virtual void use(ICharacter& target);

};
