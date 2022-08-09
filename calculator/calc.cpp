#include <iostream>

using namespace std;

int main() {
    double var1, var2;
    char decision, runAgain;

    beginning: // beggining goto, sounds like a brazilian gambiarra.
    system("cls");

    cout << "===============================" << endl;
    cout << "Welcome to CL-Calculator (beta)" << endl;
    cout << "===============================" << endl;

    cout << "Enter first number: " << endl;
    cin >> var1;

    cout << "Enter second number: " << endl;
    cin >> var2;

    cout << "What do you want to do with these numbers?" << endl;
    cout << "+ > add" << endl;
    cout << "- > substract" << endl;
    cout << "* > multiply" << endl;
    cout << "/ > divide" << endl;

    cin >> decision;
    system("cls");
    switch(decision) {
        case '+':
            cout << var1 << " + " << var2 << "  = " << (var1 + var2)<< endl;
        break;
        case '-':
            cout << var1 << " - " << var2 << "  = " << (var1 - var2)<< endl;
        break;
        case '*':
            cout << var1 << " * " << var2 << "  = " << (var1 * var2)<< endl;
        break;
        case '/':
            if(var1 && var2) {
                 cout << var1 << " / " << var2 << "  = " << (var1 / var2)<< endl;
            } else {
                cout << "You cant divide by zero!" << endl;
            }
        break;

        default:
            cout << "You type wrong character!";
    }

    cout << "Do you want to run TerminalCalculator again? y/n" << endl;
    cin >> runAgain;

    if(runAgain == 'y' || runAgain == 'Y') {
        runAgain = 'n';
        goto beginning;
    }

}
