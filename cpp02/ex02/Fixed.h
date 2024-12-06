#ifndef Fixed_H
#define Fixed_H
#include <iostream>
#include <cmath>
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
   bool operator<(const Fixed &obj);
   bool operator>(const Fixed &obj);
   bool operator<=(const Fixed &obj);
   bool operator>=(const Fixed &obj);
   bool operator==(const Fixed &obj);
   bool operator!=(const Fixed &obj);
   Fixed operator+(const Fixed &obj);
   Fixed operator-(const Fixed &obj);
   Fixed operator*(const Fixed &obj);
   Fixed operator/(const Fixed &obj);
   Fixed operator++(int);
   Fixed& operator++();
   Fixed operator--(int);
   Fixed&  operator--();

static  Fixed& min(Fixed& A, Fixed& B);
static  Fixed& max(Fixed& A, Fixed& B);
static  Fixed& min(const Fixed& A, const Fixed& B);
static  Fixed& max(const Fixed& A, const Fixed& B);
    ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);



#endif