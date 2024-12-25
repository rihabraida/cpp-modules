#ifndef Character_H
# define Character_H

#include "AMateria.h"
#include "ICharacter.h"
class Character : public ICharacter
{
private:
    std::string name;
    AMateria* inventory[4];
public:
    //Character();
    Character(std::string const & name);
    Character(Character const & other);
    Character& operator=(Character const & other);
    std::string const & getName() const ;
    virtual void equip(AMateria* m) ;
    virtual void unequip(int idx) ;
    virtual void use(int idx, Character& target) ;
    ~Character();
};


#endif