#ifndef ScalarConverter_H
# define ScalarConverter_H

#include <iostream>
#include <string>
#include <ctype.h>
#include <limits>
#include <cmath>
#include <cstring>

enum Type {
CHAR,
INT,
FLOAT,
DOUBLE,
INVALID
};

class ScalarConverter{

public:
        ScalarConverter();
        ScalarConverter(std::string str);
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter& operator=(const ScalarConverter &obj);
        static Type      DetectType(const std::string& literal);
        static void    convert(const std::string& str);
        ~ScalarConverter();
        

};


#endif