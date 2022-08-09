#include <iostream>

using namespace std;

int main() {
    int x = 50;

    // switch only accepts int and chars. in truth, it only accept int, but a chat, is a int in decimal...
    switch (x) {
    case 0:
        cout << "this will be executed when switched to zero" << endl;
        break;
    case 25:
        cout << "this will be executed when the value switchs to 25" << endl;
        break;
    case 50:
        cout << "this will be executed whern the value switchs to 50" << endl;
        break;
    default:
        cout << "this will be executed if none of the conditions above be sactisfied" << endl;
        break;
    }
}
