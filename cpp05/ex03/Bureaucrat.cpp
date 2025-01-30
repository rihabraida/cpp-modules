#include "Bureaucrat.h"

Bureaucrat::Bureaucrat():name(""),grade(0){}

Bureaucrat::Bureaucrat(std::string name ,int value):name(name){
        if(value < 1)
            throw GradeTooHighException();
        if(value > 150)
            throw GradeTooLowException();
        grade = value;

}

std::string Bureaucrat::getName() const{
    return(name);
}
int Bureaucrat::getGrade() const{
    return(grade);
}


void Bureaucrat::IncrementGrade()
{
    if(grade == 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::DecrementGrade(){
    if(grade == 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
        os <<  obj.getName() << "  bureaucrat grade  " << obj.getGrade() << std::endl;
        return os;
}
std::string Bureaucrat::GradeTooHighException::getMessage()const {
     return("Grade Too High");
}
std::string Bureaucrat::GradeTooLowException::getMessage()const {
     return("Grade Too Low");
}

void Bureaucrat::signForm(AForm& form){
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException) {
            std::cout << name << " couldn't sign " << form.getName() 
                    << " because grade is too low" << std::endl;
    }

}

void Bureaucrat::executeForm(AForm const & form){

    form.execute(*this);
    std::cout << name << " executed " << form.getName();


}