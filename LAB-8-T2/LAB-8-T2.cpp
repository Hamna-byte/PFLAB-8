// LAB-8-T2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main() {
    int a, b;
    char oper;
    cout << "ENTER FIRST NUMBER:";
    cin >> a;
    cout << "ENTER SECOND NUMBER:";
    cin >> b;
    cout << "ENTER AN OPERATOR +,/,*,-:";
    cin >> oper;
    switch (oper) {
    case '+':
        cout << a + b;
        break;
    case '/':
        cout << a / b;
        break;
    case '*':
        cout << a * b;
        break;
    case '-':
        cout << a - b;
        break;
    default:
        cout << "invalid operator" << endl;
    }
}