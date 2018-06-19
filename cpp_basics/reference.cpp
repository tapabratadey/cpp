#include <iostream>

using namespace std;

int main()
{
    string name = "Agnes";
    cout << "Value of Variable: " << name << " Address of variable is: " << &name << endl;
    string &name2 = name;
    cout << "Value of Variable: " << name2 << " Address of variable is: " << &name2 << endl;
    name2 = "Scott";
    cout << "Value of Variable: " << name << " Address of variable is: " << &name << endl;
    cout << "Value of Variable: " << name2 << " Address of variable is: " << &name2 << endl;
    return (0);

    /*
        Ref. var must be initialized when created.
        Ref. var can't change associations / connections.
        Ref. var must be the same type as associated variable.
    */
}