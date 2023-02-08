/*
    Author: Aryan Singh
    Operation[+.-,*,/,%, division by 0]
*/

#include<iostream>

using namespace std;

int main()
{
    int i = 100, j = 2;
    float x = 1.0, y = 0.02;
    
    // Addition operation - "+" operator
    int k = i + j;
    float z = x + y;

    cout << "Example of Addition operation" << endl;
    cout << "K is : " << k << endl;
    cout << "Z is: " << z << endl;

    // Subtraction operation - "-" operator
    k = i - j;
    z = x - y;

    cout << "Example of Subtraction operation" << endl;
    cout << "K is : " << k << endl;
    cout << "Z is: " << z << endl;

    // Multplication operation - "*" operator
    k = i * j;
    z = x * y;

    cout << "Example of Multiplication operation" << endl;
    cout << "K is : " << k << endl;
    cout << "Z is: " << z << endl;

    // Division operation - "/" operator
    k = i / j;
    z = x / y;

    cout << "Example of Divison operation" << endl;
    cout << "K is : " << k << endl;
    cout << "Z is: " << z << endl;

    // Division by Zero - "/" operator
    float W = 1.0 / 0.0;

    cout << "Example of Divison by zero" << endl;
    cout << "W is: " << W << endl;
}