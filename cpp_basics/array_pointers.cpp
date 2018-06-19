#include <iostream>

using namespace std;

int main()
{
    /*
    int *p;
    int num = 6;

    p = &num;
    cout << "num address: " << &num << endl;
    cout << "pointer address: " << p << endl;
    cout << "pointer address2: " << &p << endl;
    cout << "pointer value: " << *p << endl;
    */
    
    int array[3];
    int *pointer;

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    pointer = &array[0];
    cout << "array address:     " << array << endl;
    cout << "array address:     " << &array[0] << endl;
    cout << "pointer address:   " << pointer << endl;
    cout << "pointer address2:  " << &pointer << endl;
    cout << "pointer value:     " << *pointer << endl;
    cout << "array[0] value:    " << *array << endl;
    cout << "array[1] value:    " << *(array + 1) << endl;
    cout << "array[2] value:    " << *(array + 2) << endl;
    cout << "pointer value_1:    " << *pointer << endl;
    cout << "pointer value_2:    " << *(pointer + 1) << endl;
    cout << "pointer value_3:    " << *(pointer + 2) << endl;
    cout << "array[0] value:    " << array << endl;
    cout << "array[1] value:    " << (array + 1) << endl;
    cout << "array[2] value:    " << (array + 2) << endl;
    cout << "pointer value_1:    " << pointer << endl;
    cout << "pointer value_2:    " << (pointer + 1) << endl;
    cout << "pointer value_3:    " << (pointer + 2) << endl;
    return (0);
}