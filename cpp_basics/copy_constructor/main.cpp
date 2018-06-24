#include "test.hpp"

int main()
{
/*
    int a = 10;
    int b = a;

    a = 40;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
*/
    Test obj1(60, 100);
    Test obj2 = obj1;

    std::cout << "obj1.x: " << obj1.x << std::endl;
    std::cout << "obj1.y: " << obj1.y << std::endl;
    
    
    std::cout << "obj2.x: " << obj2.x << std::endl;
    std::cout << "obj2.y: " << obj2.y << std::endl;
    
    return (0);
}