#ifndef Character_H
# define Character_H

#include "AMateria.h"

class Character
{
private:
    std::string name;
    AMateria* inventory[4];
public:
    Character(std::string const & name);
    Character(Character const & other);
    Character& operator=(Character const & other);
    std::string const & getName() const ;
    void equip(AMateria* m) ;
    void unequip(int idx) ;
    void use(int idx, Character& target) ;
    ~Character();
};


#endif