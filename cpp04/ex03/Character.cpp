#include "Character.h"

Character::Character(std::string const & name): name(name){
  for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;  
}


Character::Character(Character const & other):name(other.name){
    for (int i = 0; i < 4; i++) {
            if (other.inventory[i]) 
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = nullptr;
        }
}

Character& Character::operator=(Character const & other){

    if(this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++) {
            delete inventory[i];
            if (other.inventory[i]) 
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}


 std::string const & Character::getName() const{
        return name;
 }

 void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++) {
            if (!inventory[i]) {
                inventory[i] = m;
                break;
            }
        }
 }

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && inventory[idx]) {
        inventory[idx] = nullptr;
    }
}


 void Character::use(int idx, Character& target){
        if (idx >= 0 && idx < 4 && inventory[idx]) {
            inventory[idx]->use(target);
        }
    }
