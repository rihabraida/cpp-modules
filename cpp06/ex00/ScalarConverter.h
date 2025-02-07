#ifndef ScalerConverter_H
# define ScalerConverter_H

#include <iostream>
#include <string>
#include <ctype.h>
#include <limits>

enum Type {
CHAR,
INT,
FLOAT,
DOUBLE,
INVALID
};

class ScalerConverter{

public:
        ScalerConverter();
        ScalerConverter(std::string str);
        ScalerConverter(const ScalerConverter &obj);
        ScalerConverter& operator=(const ScalerConverter &obj);
        static Type      DetectType(const std::string& literal);
        static void    convert(const std::string& str);
        ~ScalerConverter();
        

};


#endif