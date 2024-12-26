#ifndef GarbageClass_H
# define GarbageClass_H
#include "AMateria.h"

struct Node {
        AMateria* materia;
        Node* next;
        Node();
        Node(AMateria* m);
};

class GarbageClass{

private:
        Node *head;
public:
    GarbageClass();
    GarbageClass(const GarbageClass& other);
    GarbageClass &operator=(const  GarbageClass& other);
    Node * New_Node(AMateria *obj);
    void Add_back(Node *obj);
    ~GarbageClass();

};

#endif