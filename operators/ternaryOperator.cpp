#include <iostream>

using namespace std;

int main() {
    int a = 30, b  = 20;

    string message = (a > b) ? "a > b" : " b > a";

    cout << ((a > b ? a : b) + 10) << endl;
}
