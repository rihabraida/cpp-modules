#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iostream>
#include <string>
#include <exception> 

#include "AForm.h"


class Bureaucrat{
private:
    const std::string name;
    int grade;
public:
    class GradeTooHighException : public std::exception{
    public:
        std::string getMessage() const ;
        
    };
    class GradeTooLowException : public std::exception{
    public:
    std::string getMessage() const ;
    };
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat &obj);
    std::string getName() const;
    int getGrade()const;
    void IncrementGrade();
    void DecrementGrade();
    void signForm(AForm& form);
    //void executeForm(Form const & form) ;
    //destructor
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif