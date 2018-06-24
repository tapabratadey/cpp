#ifndef USER_H_
#define USER_H_
#include <iostream>

class User
{
        int ID;
        static int counter;
    public:
        User();//constructor
        ~User();//destructor
        int getId(){return ID;}
        static int getCounter() {return counter;}
};

#endif //USER_H_