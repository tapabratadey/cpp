#ifndef POINT_H_
#define POINT_H_
#include <iostream>

template<typename T>

class  Point //base, parent, superclass
{
    protected:
        T x;
    public:
        Point(T = 0);// default value 0
        ~Point();
        void setX(T);
        T getX();
}; 

template<typename T>
Point<T>::Point(T x)
{
    this->x = x;
    std::cout << "Point class costructor invoked." << std::endl;
}

template<typename T>
Point<T>::~Point()
{
    std::cout << "Point class destructor invoked." << std::endl;
}

template<typename T>
void    Point<T>::setX(T x)
{
    this->x = x;
    std::cout << "I am Point::setX" << std::endl;
}

template<typename T>
T    Point<T>::getX()
{
    return this->x;
}

template<>
double Point<double>::getX()
{
    std::cout << "this function will be executed only when Point<double> is being created." << std::endl;
    return this->x;
}
//class
template<typename K>
class Point<K*>
{
    public:
        Point(K a = 0) { std::cout << "can't use pointers" << std::endl;}
};

//class
template<typename T>
class Point2D : public Point<T> //derived, child, subclass
{
    protected:
        int y;
    public:
        Point2D(T = 0, T = 0);
        ~Point2D();
        int getY() { return y; }
        void setX(T);
        void setY(T);
        void setXY(T, T);
        Point2D operator+(Point2D);
};

template<typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x)
{
    this->y = y;
    std::cout << "Point2D class costructor invoked." << std::endl;
}

template<typename T>
Point2D<T>::~Point2D()
{
    std::cout << "Point2D class destructor invoked." << std::endl;
}

template<typename T>
void    Point2D<T>::setY(T y)
{
    this->y = y;
}

template<typename T>
void    Point2D<T>::setXY(T x, T y)
{
    setX(x);
    setY(y);
}

template<typename T>
void    Point2D<T>::setX(T x)
{
    this->x = x;
    std::cout << "I am Point2D::setX" << std::endl;
}

template<typename T>
Point2D<T> Point2D<T>::operator+(Point2D o)
{
    Point2D tmp;
    tmp.setX(this->getX() + o.getX());
    tmp.setY(this->getY() + o.getY());
    return tmp;
}

//class
template<>
class Point<char>
{
    public:
        Point(char a = 0) { std::cout << "this is from Point<char>" << std::endl; }
};


/*
    PUBLIC

    class Point2D : public Point
    everything what is inside point (excluding constructors and destructors) will be in Point 2D

    private -- CANNOT ACCESS in a child class
    protected -- protected
    public -- public

    PROTECTED
    class Point2D : protected Point
    everything what is inside point (excluding constructors and destructors) will be in Point 2D

    private -- CANNOT ACCESS in a child class
    protected -- protected
    public -- protected

    PRIVATE
    class Point2D : protected Point
    everything what is inside point (excluding constructors and destructors) will be in Point 2D

    private -- CANNOT ACCESS in a child class
    protected -- private
    public -- private
*/

#endif //POINT_H_
