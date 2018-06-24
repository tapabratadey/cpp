#include "integer.hpp"
/*
CONVERT constructors
Overload operators
*/
int main()
{
    /*
    int a = 10;
    double b = 20;

    std::cout << a / b << std::endl;
    */
   /*
    std::string text1 = "lala ";
    std::string text2 = "second " + text1;

    std::cout << text2 << std::endl;
    */

    Integer a(50);

    int b = a;
    a = 100;
    a += b;
    std::cout << a.getNumber() << std::endl;
    // std::cout << b << std::endl;
    return (0);
}