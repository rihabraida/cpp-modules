#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm(): name("Default"), isSigned(false), signGrade(150), executeGrade(150){}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), executeGrade(other.executeGrade) {}

AForm::AForm(std::string name,int signGrade,int executeGrade):name(name),isSigned(false),signGrade(signGrade),executeGrade(executeGrade){

    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm &obj){

       (void)obj;
      return *this;
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

AForm::~AForm() {}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
        os << "AForm: " << form.getName() 
           << ", signed: " << form.getSigned()
           << ", sign grade: " << form.getSignGrade()
           << ", execute grade: " << form.getExecuteGrade() << std::endl;
        return os;
    }
const char*  AForm::GradeTooHighException::what() const throw() {
     return("Grade Too High");
}
const char*  AForm::GradeTooLowException::what() const throw() {
     return("Grade Too Low");
}
const char* AForm::FormNotSignedException::what() const throw() {
     return( "Form not signed");
}

void AForm::check_Grade(Bureaucrat const & executor)const{
     if (!getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
}