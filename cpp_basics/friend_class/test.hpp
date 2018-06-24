#ifndef TEST_H_
#define TEST_H_
#include <iostream>
class B;
class A
{
    public:
        void setSecretValue(B &, int);
};

class B
{
        friend class A;
        int secretValue;
    public:
        int getSecretValue() {return secretValue;}
};

#endif //TEST_H_