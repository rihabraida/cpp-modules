#include "Point.h"

Point::Point() : x(0),y(0) {}
Point::Point(const float a, const float b): x(a), y(b){}
Point::Point(const Point& p){
    *this = p;
}
Point& Point::operator=(const Point &obj)
{
    (void)obj;
    return(*this);
 
}
int  Point::get_x() const
{
    return(x.getRawBits());
}

int  Point::get_y() const
{
    return(x.getRawBits());
}

Point::~Point()
{

}