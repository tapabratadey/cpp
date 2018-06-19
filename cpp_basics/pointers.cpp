#include <iostream>

using namespace std;

int main()
{
    int var = 5;

    cout << &var << endl;

    int *pointer;

    pointer = &var;

    cout << pointer << endl;
    cout << *pointer << endl;

    *pointer = 20;
    cout << "var: " << var << endl;
    cout << "*p: " << *pointer << endl;

    return (0);
}