#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

   float area,area1, area2, area3;
   int X1 = a.get_x() ,Y1 = a.get_y();
   int X2 = b.get_x() ,  Y2 = b.get_y();
   int X3 = c.get_x(), Y3 = c.get_y();
   int Px = point.get_x(), Py = point.get_y();

    area  =  (0.5) *   abs(X1 *(Y2 - Y3) + X2 *(Y3 - Y1) + X3 *(Y1 - Y2) );
    area1 =  (0.5) *   abs(X1 *(Y2 - Py) + X2 *(Py - Y1) + Px *(Y1 - Y2) );
    if(area1 == 0)
        return(false);
    area2 =  (0.5) *   abs(X1 *(Y3 - Py) + X3 *(Py - Y1) + Px *(Y1 - Y3) );
    if(area2 == 0)
        return(false);
    area3 =  (0.5) *   abs(X2 *(Y3 - Py) + X3 *(Py - Y2) + Px *(Y2 - Y3) );
    if(area3 == 0)
        return(false);
    
    if( area == (area1 + area2 + area3))
        return(true);
    else 
        return(false);
}