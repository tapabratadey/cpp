#ifndef TEST_H_
#define TEST_H_
#include <iostream>

class Test
{
    public:
        int x;
        int y;
        int *pointer;
        Test(const Test &); // copy constructor
        Test(int, int, int);
        ~Test();
};

#endif //TEST_H_