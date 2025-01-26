#include <iostream>
#include <string>
#include <exception> 
#include "Bureaucrat.h"

class   Form{

    const std::string name ;
    bool isSigned;
    const int signGrade;
    const int executeGrade;
public:
    Form();
    Form( std::string name,int signGrade,int executeGrade);
    Form(const Form &other);
    Form& operator=(const Form &obj);
    std::string getName() const ;
    bool getSigned() const ;
    int getSignGrade() const ;
    int getExecuteGrade() const ;
    void beSigned(const Bureaucrat& bureaucrat);
    //destructor
};

std::ostream& operator<<(std::ostream& os, const Form& form);