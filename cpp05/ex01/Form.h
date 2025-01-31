#ifndef Form_H
# define Form_H

#include <iostream>
#include <string>
#include <exception> 

class Bureaucrat;

class   Form{
private:
    const std::string name ;
    bool isSigned;
    const int signGrade;
    const int executeGrade;
public:
    class GradeTooHighException : public std::exception{
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
             const char* what() const throw();
    };
    Form();
    Form( std::string name,int signGrade,int executeGrade);
    Form(const Form &other);
    Form& operator=(const Form &obj);
    std::string getName() const ;
    bool getSigned() const ;
    int getSignGrade() const ;
    int getExecuteGrade() const ;
    void beSigned(const Bureaucrat& B);
    ~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& form);
#endif