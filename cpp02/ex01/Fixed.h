#ifndef Fixed_H
#define Fixed_H
#include <iostream>
class   Fixed {

    int value;
    static const int bits;
public :
    Fixed();
    Fixed(const Fixed &obj);
    Fixed(int num);
    Fixed(float num);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed &obj);
    ~Fixed();
};



#endif