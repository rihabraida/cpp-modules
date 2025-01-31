#include "Form.h"
#include "Bureaucrat.h"

Form::Form() : name("Default"), isSigned(false), signGrade(150), executeGrade(150){}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), executeGrade(other.executeGrade) {}


Form::Form(std::string name,int signGrade,int executeGrade):name(name),isSigned(false),signGrade(signGrade),executeGrade(executeGrade){

    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw  GradeTooLowException();
    
}

Form& Form::operator=(const Form &obj){}

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

Form::~Form() {}

std::ostream& operator<<(std::ostream& os, const Form& form) {
        os << "Form: " << form.getName() 
           << ", signed: " << form.getSigned()
           << ", sign grade: " << form.getSignGrade()
           << ", execute grade: " << form.getExecuteGrade();
        return os;
    }

const char*  Form::GradeTooHighException::what() const throw() {
     return("Grade Too High");
}
 const char*  Form::GradeTooLowException::what() const throw() {
     return("Grade Too Low");
}