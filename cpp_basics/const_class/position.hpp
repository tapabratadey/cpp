#ifndef POSTION_H_
#define POSTION_H_
#include <iostream>

class   Position
{
    int x, y;
    public:
        Position(int, int);
        ~Position();
        void getPosition() const;
        void setPosition(int, int);
        friend void setX(Position &, int);
};

#endif // POSITION_H_