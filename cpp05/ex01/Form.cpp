#include "Form.h"
#include "Bureaucrat.h"

//Form::Form(){}

Form::Form(std::string name,int signGrade,int executeGrade):name(name),isSigned(false),signGrade(signGrade),executeGrade(executeGrade){

    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw  GradeTooLowException();
    
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

void Form::beSigned(const Bureaucrat& B){

    if(B.getGrade() > signGrade)
        throw  GradeTooLowException();  
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
        os << "Form: " << form.getName() 
           << ", signed: " << form.getSigned()
           << ", sign grade: " << form.getSignGrade()
           << ", execute grade: " << form.getExecuteGrade();
        return os;
    }
std::string Form::GradeTooHighException::getMessage()const {
     return("Grade Too High");
}
std::string Form::GradeTooLowException::getMessage()const {
     return("Grade Too Low");
}