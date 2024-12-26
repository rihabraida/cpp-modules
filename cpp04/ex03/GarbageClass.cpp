#include "GarbageClass.h"

 Node::Node(AMateria* m) : materia(m), next(NULL) {}
 Node::Node() : materia(NULL), next(NULL) {}

 GarbageClass::GarbageClass(){
    head = NULL;
 }

Node * GarbageClass::New_Node(AMateria* m){

    Node *tmp = new  Node(m);
    return(tmp);
}

void GarbageClass::Add_back(Node *tmp){
    if(head == NULL)
        head = tmp;
    else
    {
         Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = tmp;
    }

}

GarbageClass::~GarbageClass(){

    Node *tmp;
    while (head)
    {
        tmp = head->next;
        delete head->materia;
        delete head;
        head = tmp;
    }
    
}