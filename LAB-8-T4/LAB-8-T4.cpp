// LAB-8-T4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main() {
    char grade;
    cout << "ENTER A GRADE FROM A,B,C,D,F:" << endl;
    cin >> grade;
    switch (grade) {
    case 'a':
        cout << "EXCELLENT ";
        break;
    case 'b':
        cout << "BETTER ";
        break;
    case 'c':
        cout << "AVEREAGE ";
        break;
    case 'd':
        cout << "BELOW AVERAGE ";
    case 'f':
        cout << " FAILED...BETTER LUCK FOR NEXT TIME.";
        break;
    default:
        cout << "INVALID INPUT CHOOSE FROM A,B,C,D,F" << endl;
    }
    return 0;
}