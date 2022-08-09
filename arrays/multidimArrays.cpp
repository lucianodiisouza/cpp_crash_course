#include <iostream>

using namespace std;

int main()
{
    int bidArray[3][4] = {0};

    cout << &bidArray[0] << endl;
    cout << &bidArray[0][0] << endl;
    cout << &bidArray[0][1] << endl;
    cout << &bidArray[0][2] << endl;
    cout << &bidArray[0][3] << endl;
    cout << &bidArray[1] << endl;
    cout << &bidArray[1][0] << endl;
}