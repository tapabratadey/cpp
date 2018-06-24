#include "classes.hpp"
/*
this-> is the address of the actual instance of the class

*/
void    Tapa::setAge(int age)
{
    if (age < 0)
        this->age = 0;
    else
        this->age = age;
}

Tapa::Tapa()
{
    std::cout << "Constructor has been invoked." << std::endl;
    age = 10;
    pointer = new int (5);
}

Tapa::Tapa(short age)
{
    std::cout << "Another constructor has been invoked." << std::endl;
    this->age = age;
}

Tapa::~Tapa()
{
    std::cout << "Destructor has been invoked." << std::endl;
    delete []pointer;
}