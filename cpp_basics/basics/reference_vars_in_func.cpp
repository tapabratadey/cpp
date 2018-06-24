#include <iostream>

using namespace std;
void swap (int &, int &);

int main()
{
    int num = 100;
    int num2 = 200;
    int temp;

    // temp = num;
    // num = num2;
    // num2 = temp;

    swap(num, num2);

    cout << "num: " << num << endl;
    cout << "num2: " << num2 << endl;
    return (0);
}

void swap (int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

/*
    Reference is just another name for vars, it's like a nickname.
    Reference vars shares the same address.
    If you change the value of reference vars or the original var
    it will change values under both places because they point to
    the same address in memory.
*/