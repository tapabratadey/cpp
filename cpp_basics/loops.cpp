#include <iostream>

using namespace std;

int main()
{
    
    int array[4];

    for (int i = 0; i < 5; i++)
        cout << "tapa" << endl;
    for (int i = 0; i < 4; i++){
        array[i] = i;
        cout << i << endl ;
    }

    
    /*infinite loop
    for (;;)
        cout << "tapa" << endl;
    */

    int i = 0;

    while (i++ < 10)
        cout << i << endl;

    return (0);
}