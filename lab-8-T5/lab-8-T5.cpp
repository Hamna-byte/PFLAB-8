// lab-8-T5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main() {
    int val;
    cout << "1:DEPOSIT" << endl;
    cout << "2:WITHDRAWL" << endl;
    cout << "3:BALANCE" << endl;
    cout << "4:EXIT" << endl;
    cout << "CHOOSE ANY NO FROM THE ABOVE:";
    cin >> val;
    switch (val) {
    case 1:
        cout << "ENTER THR DEPOSIT=";
        break;
    case 2:
        cout << "ENTER WITHDRAWL AMOUNT=";
        break;
    case 3:
        cout << "YOUR BALANCE IS 10,000";
        break;
    case 4:
        cout << "EXITED";
        break;
    default:
        cout << "Invalid option!!";

    }
    return 0;
}