#include "GarbageClass.h"

 Node::Node(AMateria* m) : materia(m), next(NULL) {}
 Node::Node() : materia(NULL), next(NULL) {}

 GarbageClass::GarbageClass(){
    head = NULL;
 }


GarbageClass::GarbageClass(const GarbageClass& other) {
    head = NULL;
    Node* current = other.head;
    while (current) {
        Add_back(New_Node(current->materia->clone()));
        current = current->next;
    }
}

GarbageClass &GarbageClass::operator=(const GarbageClass& other) {
    if (this != &other) {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current->materia;
            delete current;
            current = next;
        }
        head = NULL;

        current = other.head;
        while (current) {
            Add_back(New_Node(current->materia->clone()));
            current = current->next;
        }
    }
    return *this;
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