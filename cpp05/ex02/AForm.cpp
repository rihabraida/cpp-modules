#include "AForm.h"
#include "Bureaucrat.h"

//AForm::AForm(){}

AForm::AForm(std::string name,int signGrade,int executeGrade):name(name),isSigned(false),signGrade(signGrade),executeGrade(executeGrade){

    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

std::string AForm::getName() const {
    return(name);
}
bool AForm::getSigned() const {
    return(isSigned);
}
int AForm::getSignGrade() const {
    return(signGrade);
}
int AForm::getExecuteGrade() const {
    return(executeGrade);
}

void AForm::beSigned(const Bureaucrat& B){

    if(B.getGrade() > signGrade)
        throw GradeTooLowException();  
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
        os << "AForm: " << form.getName() 
           << ", signed: " << form.getSigned()
           << ", sign grade: " << form.getSignGrade()
           << ", execute grade: " << form.getExecuteGrade();
        return os;
    }
std::string AForm::GradeTooHighException::getMessage()const {
     return("Grade Too High");
}
std::string AForm::GradeTooLowException::getMessage()const {
     return("Grade Too Low");
}
std::string AForm::FormNotSignedException::getMessage()const {
     return( "Form not signed");
}