#include <iostream>
#include "classes.hpp"

void    test()
{
    Tapa *again = new Tapa[5];
    delete []again;
}

int main()
{
    Tapa me(21);
    // test();
    std::cout << me.getAge() << std::endl;
    return (0);
}