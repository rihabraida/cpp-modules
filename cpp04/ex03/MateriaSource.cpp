#include "MateriaSource.h"

GarbageClass gb1;

 MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++) templates[i] = NULL;
 }

MateriaSource::MateriaSource(MateriaSource const & other) {
        for (int i = 0; i < 4; i++)
        {
            if (other.templates[i])
                templates[i] = other.templates[i]->clone();
            else 
                templates[i] = NULL;
        }
}

 MateriaSource& MateriaSource::operator=(MateriaSource const & other){
    if (this != &other) {
            for (int i = 0; i < 4; i++) 
            {   
                delete templates[i];
                if (other.templates[i])
                    templates[i] = other.templates[i]->clone();
                else 
                    templates[i] = NULL;
            }
        }
        return *this;
 }

 MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++) delete templates[i];
 }

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++) {
        if (!templates[i]) {
            templates[i] = m ;
            return;
        }
    }
    if (m)
        gb1.Add_back(gb1.New_Node(m));
}


AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++) {
            if (templates[i] && templates[i]->getType() == type)
                return templates[i]->clone();
        }
        return NULL;

}