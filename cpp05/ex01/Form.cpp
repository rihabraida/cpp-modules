#include "Form.h"

Form::Form(){}

Form::Form(std::string name,int signGrade,int executeGrade)try:name(name),isSigned(false),signGrade(signGrade),executeGrade(executeGrade){

    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    
}
catch(GradeTooHighException& e)
{
    std::cout << e.getMessage() <<std::endl;
}
catch(GradeTooLowException& e)
{
        std::cout << e.getMessage() <<std::endl;
}

std::string Form::getName() const {
    return(name);
}
bool Form::getSigned() const {
    return(isSigned);
}
int Form::getSignGrade() const {
    return(signGrade);
}
int Form::getExecuteGrade() const {
    return(executeGrade);
}

void beSigned(const Bureaucrat& B){

    if(B.getGrade() > signGrade)
        throw GradeTooLowException();  
    isSigned = true;
}

friend std::ostream& operator<<(std::ostream& os, const Form& form) {
        os << "Form: " << form.name 
           << ", signed: " << form.isSigned 
           << ", sign grade: " << form.signGrade
           << ", execute grade: " << form.executeGrade;
        return os;
    }
