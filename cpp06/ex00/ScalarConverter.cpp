#include "ScalarConverter.h"


Type      ScalarConverter::DetectType(const std::string& literal){

    bool isDecimal = false;
    bool isFloat = false;
    
    if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
            return CHAR;
    if (literal == "nan" || literal == "+inf" || literal == "-inf")
            return DOUBLE;
    if (literal == "nanf" || literal == "+inff" || literal == "-inff")
            return FLOAT;


    for (size_t i = 0; i < literal.length(); i++) {

        if((literal[0] == '+' || literal[0] == '-'))
            continue;
        if(literal[i] == '.')
        {
            if(isDecimal) return INVALID;
            isDecimal = true;
            continue;
        }
        if(literal[i] == 'f' && i == literal.length() -1)
        {
            isFloat = true;
            continue;
        }
        if(!isdigit(literal[i]))
            return(INVALID);

    }
    if(isFloat && isDecimal) 
        return(FLOAT);
    if(isDecimal)
        return(DOUBLE);
    return(INT);
}



 void    ScalarConverter::convert(const std::string &literal) {

    Type type = DetectType(literal);

        if (type == INVALID) {
            std::cout << "Invalid input" << std::endl;
            return;
        }

        double value;
        if (type == CHAR) {
            value = literal[1];
        } else {
            value = strtod(literal.c_str(),NULL);
        }

        std::cout << "char: ";
        if (std::isnan(value) || std::isinf(value)) {
            std::cout << "impossible";
        } else if (value < 32 || value > 126) {
            std::cout << "Non displayable";
        } else {
            std::cout << "'" << static_cast<char>(value) << "'";
        }
        std::cout << std::endl;

        std::cout << "int: ";
        if (std::isnan(value) || std::isinf(value)) {
            std::cout << "impossible";
        } else {
            std::cout << static_cast<int>(value);
        }
        std::cout << std::endl;

        std::cout << "float: ";
        if (std::isinf(value)) {
            if(value > 0)
                std::cout << "+inff";
            else
                std::cout << "-inff";
        } 
        else if (std::isnan(value)) {
            std::cout << "nanf";
        } 
        else {
            std::cout  << static_cast<float>(value) << "f";
        }
        std::cout << std::endl;

        std::cout << "double: ";
        if (std::isinf(value)) {
             if(value > 0)
                std::cout << "+inff";
            else
                std::cout << "-inff";
        } 
        else if (std::isnan(value)) {
            std::cout << "nan";
        }
        else {
            std::cout << value;
        }
        std::cout << std::endl;

 }
