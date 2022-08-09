#include <iostream>

using namespace std;

int main()
{
    /*
        for (initialization; condition; inc/dev) {
            // code to be executed
            // code to be executed
            // code to be executed
        }
    */

    /*
        for (int i = 0; i < 5; i++)
        {
            cout << i << endl;
        }
    */

    int array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
        cout << array[i] << endl;
    }

    // for(;;) cout << 'lala' << endl; // infinite
}