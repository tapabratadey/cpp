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
    Test obj1(60, 100, 60);
    Test obj2 = obj1;

    obj2.x = 200;
    *(obj1.pointer) = 700;

    std::cout << "obj1.x:                           " << obj1.x << std::endl;
    std::cout << "obj1.y:                           " << obj1.y << std::endl;
    std::cout << "value of pointer *(obj1.pointer): " << *(obj1.pointer) << std::endl << std::endl;
    
    
    std::cout << "obj2.x:                           " << obj2.x << std::endl;
    std::cout << "obj2.y:                           " << obj2.y << std::endl;
    std::cout << "value of pointer *(obj2.pointer): " << *(obj2.pointer) << std::endl;
    
    return (0);
}