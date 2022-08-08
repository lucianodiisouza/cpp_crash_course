#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    // we have a math problem here, cause << is an operator too, use parenthesis f
    // or show to compiler, what is the operation that you want execute (priority order)

    cout << (a == b) << endl; // this will always return a bool value
    cout << (a != b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    cout << !(a == b) << endl;  // inverting the bool result given
}
