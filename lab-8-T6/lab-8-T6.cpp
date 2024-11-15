// lab-8-T6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main() {
    char color;
    cout << "ENTER A COLOUR R/Y/G:";
    cin >> color;
    switch (color) {
    case 'r':
        cout << "STOP!!";
        break;
    case 'y':
        cout << "SLOW DOWN...";
        break;
    case 'g':
        cout << "GO";
        break;
    default:
        cout << "Invalid input choose from the above..." << endl;
    }
    return 0;
}