#include "Point.h"

int main() {
    Point a(0.0f, 0.0f);
    Point b(4.0f, 0.0f);
    Point c(2.0f, 3.0f);
    Point p(2.0f, 1.0f);

    if (bsp(a, b, c, p)) {
        std::cout << "The point is inside the triangle.\n";
    } else {
        std::cout << "The point is outside the triangle.\n";
    }

    return 0;
}