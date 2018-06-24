#include "test.hpp"

int main()
{
    B objB;
    A objA;

    objA.setSecretValue(objB, 600);
    std::cout << objB.getSecretValue() << std::endl;

    return (0);
}