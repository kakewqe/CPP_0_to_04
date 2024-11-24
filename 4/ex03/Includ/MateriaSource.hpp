#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class   MateriaSource : public IMateriaSource
{
        public:
            MateriaSource();
            ~MateriaSource();
            
            MateriaSource &operator =(const  MateriaSource &o);
            MateriaSource(const MateriaSource &o);
            
            void        learnMateria(AMateria*m);
            AMateria*   createMateria(std::string const & type);
        
        protected :
            
            AMateria *_materias[4];
            AMateria *_clone[4];

};