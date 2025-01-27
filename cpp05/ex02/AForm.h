#include <iostream>
#include <string>
#include <exception> 
#include "Bureaucrat.h"

class   AForm{

    const std::string name ;
    bool isSigned;
    const int signGrade;
    const int executeGrade;
public:
    class FormNotSignedException : public std::exception {
    public:
        std::string getMessage() const { return "Form not signed"; }
    };
    AForm();
    AForm( std::string name,int signGrade,int executeGrade);
    AForm(const AForm &other);
    AForm& operator=(const AForm &obj);
    std::string getName() const ;
    bool getSigned() const ;
    int getSignGrade() const ;
    int getExecuteGrade() const ;
    void beSigned(const Bureaucrat& bureaucrat);
    void execute(Bureaucrat const & executor) const = 0;
    //destructor
};

std::ostream& operator<<(std::ostream& os, const AForm& form);