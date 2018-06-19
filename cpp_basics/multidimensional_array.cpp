#include <iostream>

using namespace std;

int main()
{
    int multi_array[3][4] = {1};

    cout << &multi_array[0] << endl;
    cout << &multi_array[0][0] << endl;
    cout << &multi_array[0][1] << endl;
    cout << &multi_array[0][2] << endl;
    cout << &multi_array[0][3] << endl;
    cout << &multi_array[1] << endl;
    cout << &multi_array[1][0] << endl;
    cout << &multi_array[1][1] << endl;
    return (0);
}