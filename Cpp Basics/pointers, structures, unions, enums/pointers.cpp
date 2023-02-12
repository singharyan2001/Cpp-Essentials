/*
    Author: Aryan Singh
    Topic: Pointers
    Pointer is a data type which holds the address of other data types
    liquid text
*/

#include<iostream>
using namespace std;

int main(){

// Pointers Basic

    int a = 3;
    int* b = &a;

    cout << "The value of a is: " << a << endl;
    cout << "----------------------------------" <<endl;
    cout << "The address of a is: " << &a <<endl;               // Ampersand/Address of operator - "&"
    cout << "----------------------------------" <<endl;
    cout << "Pointer b address is: " << b <<endl;
    cout << "----------------------------------" <<endl;
    cout << "Pointer b value is: " << *b <<endl;                // Dereference operstor - "*"
    cout << "----------------------------------" <<endl;

// Pointer to Pointer

    int** c = &b;
    cout << "The Address of b is: " << &b << endl;
    cout << "----------------------------------" <<endl;
    cout << "The value of c is: " << c << endl;
    cout << "----------------------------------" <<endl;
    cout << "The value at address c is: " << **c <<endl;
    cout << "----------------------------------" <<endl;

    return 0;
}