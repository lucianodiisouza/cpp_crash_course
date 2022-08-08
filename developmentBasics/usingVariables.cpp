#include <iostream>

using namespace std;



int main()
{

    // integer accept -2bi from +2bi (2000000000) , or only 4 Bytes of memory
    int a = 40, b, c = 20;
    cout << "a : " << a << " address: " << &a << endl;
    cout << "b : " << b << " address: " << &b << endl;
    cout << "c : " << c << " address: " << &c << endl;

    short t1 = 5; // -32768 to 32767, or only 2 Bytes of memory
    cout << t1 << endl;

    float t2 = 5.12; // 4 bytes
    cout << t2 << endl;

    double t3 = 5.12; // 8bytes
    cout << t3 << endl;

    char t4 = 'a';
    cout << t4 << endl;

    string t5 = "Hello cpp";
    cout << t5 << endl;

    string x = "part1";
    string y = "part2";
    string combinedStrings = x + "  " + y;
    cout << combinedStrings << endl;

    // boolean always talks about true or false (obvious) but the
    // result will be 0 for false, and any other number will be true.
    bool t6 = true;
    cout << t6 << endl;

    // for unsigned short int, 0 to 65535
    // for signed see the line 16
    unsigned short t7 = 3700;
    cout << t7 << endl;


    const string NAMEOFGAME = "The conqueror of c++";
    cout << NAMEOFGAME << endl;

    // this will throw an error, because nameofgame is a constant.
    // NAMEOFGAME = "league of legends ";
}
