#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char user_choice;
    char decide;

    beginning:
    system("cls");
    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;
    
    
    cout << "+ -> add" << endl;
    cout << "- -> substract" << endl;
    cout << "* -> multiplication" << endl;
    cout << "/ -> division" << endl;
    
    cout << "Choose an operation: " << endl;
    cin >> user_choice;

    system("cls");

    switch (user_choice)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            else
                cout << "a number cannot be divided by 0." << endl;
            break;
        default:
            cout << "wrong command." << endl;
    }

    cout << "Continue (Y?N)?" << endl;
    cin >> decide;

    if (decide == 'Y' || decide == 'y')
        goto beginning;
}