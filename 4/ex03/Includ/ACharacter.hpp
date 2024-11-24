#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class ACharacter : public ICharacter
{
    public :

        ACharacter();
        ACharacter(std::string name);
        
        ~ACharacter();
        
        ACharacter(const ACharacter &o);
        ACharacter & operator = (const ACharacter &o);

        std::string const &     getName() const;        
        void                    setName(std::string  name);
        void                    getIventary();
        std::string             getIventary_index(int i);
        void                    setIventary();
        void                    delet_ground();
        void                    set_ground(AMateria *new_ground);
        void                    use(int idx, ICharacter& target);
        void                    equip(AMateria *m);
        void                    unequip(int idx);
    
    protected :
    
        AMateria        *_inventary[4];
        AMateria         *_ground[4];
        static  int        conteur;

};
