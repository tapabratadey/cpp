#include "point.hpp"
/*
Inheritance between classes
*/

void    operationOnPoint();
int main()
{
    operationOnPoint();
    return (0);
}

void    operationOnPoint()
{
    Point2D p2(10, 67);

    p2.Point::setX(5);
    std::cout << p2.getX() << std::endl;
    std::cout << p2.getY() << std::endl;
}