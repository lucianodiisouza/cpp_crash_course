#include <iostream>

using namespace std;

int main() {
    int a;

    int arr[3];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    cout << "array [0] " << arr[0] << ", address: " << &arr[0] << endl;
    cout << "array [1] " << arr[1] << ", address: " << &arr[1] << endl;
    cout << "array [2] " << arr[2] << ", address: " << &arr[2] << endl;

    // hexadecimal: 0 1 2 3 4 5 6 7 8 9 a b c d e f
    // decimal: 0 1 2 3 4 5 6 7 8 9 
}