#include <iostream>

int main()
{

    int amount;

    std::cout << "total numbers you would like to store?" << std::endl;
    std::cin >> amount;

    int *pointer = new (std::nothrow)int[amount];
    // cout << "pointer address: " << pointer << endl;
    std::cout << "pointer here: " << pointer << std::endl;
    if (pointer)
    {
        for (int i = 0; i < amount; i++)
        {
            std::cout << "enter the: " << (i + 1) << " number: ";
            std::cin >> pointer[i];
        }
        for (int i = 0; i < amount; i++)
            std::cout << "pointer [" << i << "] = " << pointer[i] << std::endl;
    }
    else
        std::cout << "Not enough memory." << std::endl;
    delete[] pointer;
    return (0);
/*
    int *pointer = new int;
    *pointer = 50;
    cout << pointer << endl;
    cout << *pointer << endl;
    delete pointer;
    pointer = NULL;
    pointer = &var;
    if (pointer)
    {
        *pointer = 500;
        cout << *pointer << endl;
    }
    // cout << pointer << endl;
*/
}