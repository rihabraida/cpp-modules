#ifndef GarbageClass_H
# define GarbageClass_H
#include "AMateria.h"

class GarbageClass{

private:
    AMateria  *m;
    AMateria  *next;
public:
    GarbageClass();
    GarbageClass(const GarbageClass& other );
    GarbageClass &operator=(const  GarbageClass& other);
    AMateria  * Add_back(AMateria  *m);
    ~GarbageClass();

};

#endif