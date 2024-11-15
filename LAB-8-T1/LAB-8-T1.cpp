// LAB-8-T1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter any no less than 7:";
    cin >> day;
    switch (day) {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thrusday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;

    }
    return 0;
}