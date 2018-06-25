#include "point.hpp"
/*
    Function Template (Generalization of functions)
*/

void    operationOnPoint();
template<typename T, typename T2>
T add(T var1, T2 var2)
{
    return var1 + var2;
}
/*
template<>
Point2D add(Point2D var1, Point2D var2)
{
    Point2D tmp;

    tmp.setX(var1.getX() + var2.getX());
    tmp.setY(var1.getY() + var2.getY());

    return tmp;
}
*/

typedef Point<int> PointInt;
int main()
{
    operationOnPoint();

    // std::cout << add<double, double>(2, 5.5) << std::endl;
    // std::cout << static_cast<int>(6.5) << std::endl;
    return (0);
}

void    operationOnPoint()
{
    // PointInt a(5);

    // Point2D<double> b(10.5, 5);
    Point<int *> b(50);
    

    // std::cout << b.getX() << std::endl;

    // std::cout << a.getX() << std::endl;

    /*
    Point2D p2(10, 67);
    Point2D p1(50, 30);
    
    Point2D sum = add(p1, p2);
    std::cout << sum.getX() << std::endl;
    std::cout << sum.getY() << std::endl;
    */
    /*
    p2.Point::setX(5);

    std::cout << p2.getX() << std::endl;
    std::cout << p2.getY() << std::endl;
    */
}