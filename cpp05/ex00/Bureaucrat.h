#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iostream>
#include <string>
#include <exception> 

class GradeTooHighException : public std::exception{
public:
    virtual const char* what() const throw()
    {
        return("Bureaucrat::GradeTooHighException");
    }
     
};
class GradeTooLowException : public std::exception{
public:
    virtual const char* what() const throw()
    {
        return("Bureaucrat::GradeTooLowException");
    }
};


class Bureaucrat{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat &obj);
    std::string getName() const;
    int getGrade()const;
    int IncrementGrade();
    int DecrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif