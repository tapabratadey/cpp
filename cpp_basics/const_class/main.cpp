#include "position.hpp"

int main()
{
    Position dog(10, 50);
    
    dog.getPosition();
    dog.setPosition(100, 500);
    dog.getPosition();

    const Position house(100, 200);

    house.getPosition();
    // house.setPosition(100, 500);
    // house.getPosition();

    return (0);
}