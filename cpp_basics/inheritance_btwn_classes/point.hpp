#ifndef POINT_H_
#define POINT_H_
#include <iostream>

class  Point //base, parent, superclass
{
    protected:
        int x;
    public:
        Point(int = 0);// default value 0
        ~Point();
        void setX(int);
        int getX() { return x; }
}; 

class Point2D : public Point //derived, child, subclass
{
    protected:
        int y;
    public:
        Point2D(int = 0, int = 0);
        ~Point2D();
        int getY() { return y; }
        void setX(int);
        void setY(int);
        void setXY(int, int);

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
