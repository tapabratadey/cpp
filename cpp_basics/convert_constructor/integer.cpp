#include "integer.hpp"

Integer::Integer(int number)
{
    this->number = number;
}

Integer::operator int()
{
    return this->number;
}

int Integer::operator+=(Integer obj)
{
    this->number = obj.getNumber() + this->number;
    return this->number;
}