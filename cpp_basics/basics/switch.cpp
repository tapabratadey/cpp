#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    switch (a)
    {
        case 0:
            cout << "switch value 0" << endl;
            break;
        case 25:
            cout << "switch value 25" << endl;
            break;
        case 50:
            cout << "switch value 50" << endl;
            break;
        default:
            cout << "default case" << endl;
    }
    return (0);
}

/*
    switch can only be used for ints and chars
*/