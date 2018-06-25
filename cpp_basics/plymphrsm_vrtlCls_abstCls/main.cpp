#include "farm.hpp"
/*
Polymorphism, virtual functions, and abstract class
*/

void voiceOfAnimal(Animal *pointer)
{
    std::cout << pointer->getVoice() << std::endl;
}

int main()
{
    Dog dog;
    Cat cat;
    Cow cow;
    
    /*
    std::cout << animal.getVoice() << std::endl;
    std::cout << dog.getVoice() << std::endl;
    std::cout << cat.getVoice() << std::endl;
    std::cout << cow.getVoice() << std::endl;
    */

    voiceOfAnimal(&cat);

    return (0);
}