#include <iostream>

using namespace std;

int main() {
    int a = 100, b = 10;
        /*
            cout << "Enter a: " << endl;
            cin >> a;

            cout << "Enter b: " << endl;
            cin >> b;
        */

        // if you want to group instructions, use brackets  {}
        if ( a > b)
            cout << a << " > " << b << endl;
        else if (a < b) {
            cout << a << " < " << b << endl;

            if (a < 10)  {
                cout << "a is smaller than 10" << endl;
            }
        }

        else
            cout << "This will be executed only if conditions above were not met" << endl;

        /*
            if(7 > 4) {
               cout << "something";
                cout << "test";
            }

            if(12314123)
                cout << "condition above is surely not equal to 0 (false)" << endl;

            if((7 < 4 || 0 < 10) && (10 == 9))
                cout << "7 < 4 || o < 10" << endl;
        */
}
