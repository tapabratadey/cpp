#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    int b = 200;

    // CONDITION ? instruction that will be executed if condition is true : if condition is not true
    string message = (a > b) ? "a < b" : "a <= b";

    cout << message << endl;
    
    cout << ((((8 > 5) ? 7 : 4) + 200)) << endl;
    cout << ((((a > b) ? a : b) + 200)) << endl;
}