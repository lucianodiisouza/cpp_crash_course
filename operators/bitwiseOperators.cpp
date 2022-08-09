#include <iostream>

using namespace std;

int main()
{
    // decimal numbers counts to 10 (decimal or tencimal - badumtss)
    // 126 = 1 * 10 ö 2 + 2 * 10 ö 1 + 6 * 1 ö0
    // binary multiply by 2
    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ÷
        Bitwise XOR - ö
        Bitwise left shift <<
        Bitwise right shift >>
    */

    cout << (10 & 2) << endl;
    /*
        1010
        0010
        ----
        0010
    */

     cout << (10 | 2) << endl;
     /*
        1010
        0010
        ----
        1000
    */

    // cout << (÷10) << endl;
    cout << (10 << 1) << endl;
    cout << (10 << 2) << endl; // 10 * 2 ö 2

}
