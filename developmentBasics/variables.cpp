#include <iostream>

using namespace std;

// Here at this example, we can see that the variable value will be replaced
// but his address will be the same.

int main()
{
    int A;
    A = 31;
    cout << A << endl;
    cout << &A  << endl;

    A = 33;
    cout << A << endl;
    cout << &A;
}

/*
    - Variables cannot have duplified names
    - Variables cannot start with number
    - We cannot use spaces (name variable)
    - they need to be self-descriptive
*/
