#include "Point.h"

Point::Point() : x(0),y(0) {}
Point::Point(const float a, const float b): x(a), y(b){}
Point::Point(const Point& p) : x(p.x), y(p.y){}
Point& Point::operator=(const Point &obj)
{
    (void)obj;
    return(*this);
 
}
float  Point::get_x() const
{
    return(x.toFloat());
}

float  Point::get_y() const
{
    return(y.toFloat());
}

Point::~Point(){}