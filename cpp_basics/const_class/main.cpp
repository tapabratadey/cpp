#include "position.hpp"

void    setX(Position &obj, int value)
{
    //Position &obj = dog;
    obj.x = value;
}

int main()
{
    Position dog(10, 50);
    
    dog.getPosition();
    setX(dog, 1500);
    dog.getPosition();

    const Position house(100, 200);

    house.getPosition();
    // house.setPosition(100, 500);
    // house.getPosition();

    return (0);
}