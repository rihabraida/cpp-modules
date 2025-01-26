#include "Bureaucrat.h"

Bureaucrat::Bureaucrat():name(""),grade(0){}

Bureaucrat::Bureaucrat(std::string name ,int value):name(name){
    try{
        if(value < 1)
            throw GradeTooHighException();
        if(value > 150)
            throw GradeTooLowException();

        grade = value;
    }
    catch(GradeTooHighException& e)
    {
        std::cout << e.getMessage() <<std::endl;
    }
    catch(GradeTooLowException& e)
    {
         std::cout << e.getMessage() <<std::endl;
    }

}

std::string Bureaucrat::getName() const{
    return(name);
}
int Bureaucrat::getGrade() const{
    return(grade);
}


void Bureaucrat::IncrementGrade()
{
    try{
        if(grade == 1)
            throw GradeTooHighException();
        grade--;
    }
    catch(GradeTooHighException& e)
    {
        std::cout << e.getMessage() <<std::endl;
    }
}

void Bureaucrat::DecrementGrade(){

    try{
        if(grade == 150)
            throw GradeTooLowException();
        grade++;
    }
    catch(GradeTooLowException& e)
    {
         std::cout << e.getMessage() <<std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
        os <<  obj.getName() << "  bureaucrat grade  " << obj.getGrade() << std::endl;
        return os;
}

Bureaucrat::signForm(Form& form){
try:
{
    form.beSigned(*this);
    std::cout << name << " signed " << form.getName() << std::endl;
}
catch (Form::GradeTooLowException&) {
        std::cout << name << " couldn't sign " << form.getName() 
                  << " because grade is too low" << std::endl;
}

}