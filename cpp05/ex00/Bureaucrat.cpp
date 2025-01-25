#include "Bureaucrat.h"

Bureaucrat::Bureaucrat():name(""),grade(0){}

Bureaucrat::Bureaucrat(int value):name(""){
    
    try{
        if(value < 1)
            throw GradeTooHighException();
        if(value > 150)
            throw GradeTooLowException();

        grade = value;
    }
    catch(GradeTooHighException& e)
    {
        std::cout << e.what() <<std::endl;
    }
    catch(GradeTooLowException& e)
    {
         std::cout << e.what() <<std::endl;
    }

}

std::string Bureaucrat::getName() const{
    return(name);
}
int Bureaucrat::getGrade() const{
    return(grade);
}


int Bureaucrat::IncrementGrade()
{
    grade--;
    try{
        if(grade < 1)
            throw GradeTooHighException();
    }
    catch(GradeTooHighException& e)
    {
        std::cout << e.what() <<std::endl;
    }
    return(grade);
}

int Bureaucrat::DecrementGrade(){

    grade++;
    try{
        if(grade > 150)
            throw GradeTooLowException();

    }
    catch(GradeTooLowException& e)
    {
         std::cout << e.what() <<std::endl;
    }
    return(grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
        os <<  obj.getName() << "bureaucrat grade" << obj.getGrade() << std::endl;
        return os;
}