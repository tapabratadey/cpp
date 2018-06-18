#include <iostream>

using namespace std;

int main()
{
    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~
        Bitwise XOR - ^
        0 0 0
        0 1 1
        1 0 1
        1 1 0 
        
        Bitwise left shift <<
        Bitwise right shift >>
    */

    cout << (10 & 2) << endl;

    /*
        1 0 1 0
        0 0 1 0
        -------
        0 0 1 0

        result = 2
    */

    cout << (10 | 2) << endl;

    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 1 0

        result = 10
    */

    cout << (10 ^ 2) << endl;

    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 0 0

        result = 8
    */

    cout << (~10) << endl;

    /*
        1 0 1 0
        -------
        0 1 0 1
        
        0000000000000000000000000 1 0 1 0
        ---------------------------------
        1111111111111111111111111 0 1 0 1

        1 infront of bits refers as a negative number

        result = -11

    */

    cout << (10 << 3) << endl;

    /* 
        shift left
        -----------
        
        0000000000000000000000000 1 0 1 0
        ----------------------------------
        0000000000000000000000001 0 1 0 0

        20 in decimal notation

        cout << (10 << 2) << endl
        means (0000000000000000000000000 1 0 1 0) will get shifted twice->
        so it means that we are multiplying 10 by 2 raised to the power of 2
    */

    cout << (10 >> 2) << endl;

    /* 
        shift right
        -----------
        
        0000000000000000000000000 1 0 1 0
        ----------------------------------
        0000000000000000000000000 0 1 0 1

        result = 5
        so it means that we are dividing 10 by 2 raised to the power of 2
    */
   
}