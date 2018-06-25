#include "test.hpp"

Test::Test(int x, int y, int value)
{
    this->x = x;
    this->y = y;
    this->pointer = new int(value);
}

Test::~Test()
{
    delete pointer;
}

Test::Test(const Test &obj)
{
    this->pointer = new int (*(obj.pointer));
    this->x = obj.x;
    this->y = obj.y;

}