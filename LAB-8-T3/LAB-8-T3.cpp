// LAB-8-T3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main() {
    char val;
    cout << "Enter a single alphabet:";
    cin >> val;
    switch (val) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << val << " is Vowel." << endl;
    default:
        cout << val << " is Consonent." << endl;
    }
    return 0;
}