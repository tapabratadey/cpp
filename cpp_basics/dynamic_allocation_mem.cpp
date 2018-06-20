#include <iostream>

using namespace std;

int main()
{
/*
    int amount;

    cout << "total numbers you would like to store?" << endl;
    cin >> amount;

    int *pointer = new (std::nothrow)int (amount);
    // cout << "pointer address: " << pointer << endl;
    cout << "pointer here: " << pointer << endl;
    if (pointer)
    {
        for (int i = 0; i < amount; i++)
        {
            cout << "enter the: " << (i + 1) << " number: ";
            cin >> pointer[i];
        }
        for (int i = 0; i < amount; i++)
            cout << "pointer [" << i << "] = " << pointer[i] << endl;
    }
    else
        cout << "Not enough memory." << endl;
    delete pointer;
    return (0);
*/
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
}