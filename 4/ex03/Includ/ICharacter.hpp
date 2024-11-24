#pragma once
#include <iostream> 
#include <string>

class AMateria;

class ICharacter 
{
    public :
        

        virtual ~ICharacter() {}
        //ICharacter();
        //ICharacter(std::string name);
        //ICharacter & operator = (const ICharacter &o);
        //ICharacter(const ICharacter &o);
        virtual void            equip(AMateria *m) = 0;
        virtual void            unequip(int idx) = 0;
        virtual void            use(int idx, ICharacter& target) = 0;
        virtual void            setName(std::string  name) = 0;
        virtual                 std::string const & getName() const = 0 ; 
        virtual void            delet_ground() = 0;

       protected :

        std::string             _name;
        static int               _conteur;

};
