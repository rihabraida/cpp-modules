#ifndef Fixed_H
#define Fixed_H
#include <iostream>
class   Fixed {

    int value;
    static const int bits;
public :
    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};



#endif