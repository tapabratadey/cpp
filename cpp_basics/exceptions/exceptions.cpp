#include <iostream>

/*
    Exceptions - handling exceptions.
    Are situations that can happen that will stop our program.
*/
class DivisionByZeroException
{
    public:
        void getErrorMessage() { std::cout << "Error: Do not divide by zero." << std::endl; }
};

double division(double a, double b) 
{
    if (b == 0)
        throw DivisionByZeroException();
    return a / b;
}

int main()
{
    double result;

    try
    {
        result = division(5, 0);    
        std::cout << "The result is:  " << result << std::endl;
    }
    catch(DivisionByZeroException e)
    {
        e.getErrorMessage();
    }
    catch(...)
    {
        std::cout << "Other errors. "  << std::endl;
    }
    return (0);
}