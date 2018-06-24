#ifndef INTEGER_H_
#define INTEGER_H_
#include <iostream>

class Integer
{
    int number;
    public:
        Integer() {};
        Integer(int);// convert constuctor
        operator int();
        int operator+= (Integer);
        int getNumber() { return number; }
};

#endif //INTEGER_H_