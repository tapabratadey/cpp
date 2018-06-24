#ifndef CLASSES_H_
#define CLASSES_H_

#include <iostream>


class Tapa
{
    private:
        short age;
        std::string name;
        int *pointer;
    public:
        Tapa();//constructor used to initialize something
        Tapa(short);//overloading constructor
        ~Tapa();//Destructor to destruct 
        void    setAge(int);
        short   getAge() {return age;}
};

#endif // CLASSES_H_