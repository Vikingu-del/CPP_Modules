#include "Fixed.hpp"
#include <iostream>

#include "bsp.hpp"

int main( void ) {
    Point a = Point(2.0f, 1.0f);
    Point b = Point(4.0f, 7.0f);
    Point c = Point(7.0f, 1.0f);
    Point point = Point(7.0f, 1.0f);

    std::cout << bsp(a, b, c, point) << std::endl;

    return 0;
}
