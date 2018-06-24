#include "point.hpp"

Point::Point(int x)
{
    this->x = x;
    std::cout << "Point class costructor invoked." << std::endl;
}

Point::~Point()
{
    std::cout << "Point class destructor invoked." << std::endl;
}

void    Point::setX(int x)
{
    this->x = x;
    std::cout << "I am Point::setX" << std::endl;
}

Point2D::Point2D(int x, int y) : Point(x)
{
    this->y = y;
    std::cout << "Point2D class costructor invoked." << std::endl;
}

Point2D::~Point2D()
{
    std::cout << "Point2D class destructor invoked." << std::endl;
}

void    Point2D::setY(int y)
{
    this->y = y;
}

void    Point2D::setXY(int x, int y)
{
    setX(x);
    setY(y);
}

void    Point2D::setX(int x)
{
    this->x = x;
    std::cout << "I am Point2D::setX" << std::endl;
}