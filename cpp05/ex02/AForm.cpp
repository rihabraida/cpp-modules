#include "AForm.h"

AForm::AForm(){}

AForm::AForm(std::string name,int signGrade,int executeGrade)try:name(name),isSigned(false),signGrade(signGrade),executeGrade(executeGrade){

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
