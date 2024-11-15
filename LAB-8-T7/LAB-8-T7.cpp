// LAB-8-T7.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
int main() {
    int val;
    cout << "Enter a single-digit from 0-9:";
    cin >> val;
    switch (val) {
    case 0:
        cout << "ZERO";
        break;
    case 1:
        cout << "ONE";
        break;
    case 2:
        cout << "TWO";
        break;
    case 3:
        cout << "THREE";
        break;
    case 4:
        cout << "FOUR";
        break;
    case 5:
        cout << "FIVE";
        break;
    case 6:
        cout << "SIX";
        break;
    case 7:
        cout << "SEVEN";
        break;
    case 8:
        cout << "EIGHT";
        break;
    case 9:
        cout << "NINE";
        break;
    default:
        cout << "Invalid valuee!!";
    }
    return 0;
}