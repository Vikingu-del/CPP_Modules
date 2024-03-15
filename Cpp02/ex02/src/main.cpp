#include "Fixed.hpp"
#include <iostream>

#include <iostream>
int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;

    std::cout << b << std::endl;
    // std::cout << "min is: " << Fixed::min( b, a ) << std::endl;
    std::cout << "max is: " << Fixed::max( b, a ) << std::endl;

    // std::cout << (a * b) << std::endl;
    // std::cout << (a / b) << std::endl;
    // std::cout << (b / a) << std::endl;
    // std::cout << (a + b) << std::endl;
    // std::cout << (a - b) << std::endl;
    // std::cout << (a == b) << std::endl;
    // std::cout << (a != b) << std::endl;
    // std::cout << (a > b) << std::endl;
    // std::cout << (a < b) << std::endl;
    // std::cout << (a >= b) << std::endl;
    // std::cout << (a <= b) << std::endl;

    return 0;
}
