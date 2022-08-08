#include <iostream>

using namespace std;

int main()
{
    // AND conjunction &&
    /* conjunction will be true ONLY if all expressions are true
    /*
        if( 7 > 5 && 2 < 3) {
            cout << "both true";
        }
    */


    cout << ( 7 > 5 && 5 != 10) << endl;
    cout << ( 5 > 7 && 5 != 10) << endl;

    // OR disjunction ||
    // disjunction will be false only if both expressions are false

    cout << ( 7 < 5 || 5 > 10) << endl;
    cout << ( 5 > 7 || 5 != 10) << endl;

    // ! NOT (exclamation mark)
    // this will invert the results, if true, the return will be false (0)
     cout << !( 5 > 7 && 5 != 10) << endl;
}
