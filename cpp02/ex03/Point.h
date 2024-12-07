#ifndef Point_H
#define Point_H
#include"Fixed.h"

class Point{

    const Fixed  x;
    const Fixed  y;

public:
    Point();
    Point(const float a, const float b);
    Point(const Point& p);
    Point& operator=(const Point &obj);
    int get_x() const;
    int get_y() const;
    ~Point();

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif