/*
    Author: Aryan Singh
    Basic operations using shortcut operators, checking Hierarchy of priorities, ASCII, Escape Characters
*/
#include<iostream>

using namespace std;

int main(){
// Shortcut operators - [+,-,*,/,%]
  // Addition operation
    int x = 35;
    cout << "Value of x is: " << x << endl;
    x += 1;
    cout << "Value of Incremented x is: " << x << endl;
  // Subtraction operation
    int y = 45;
    cout << "Value of y is: " << y << endl;
    y -= 1;
    cout << "Value of Decremented y is: " << y << endl;
  // Multiplication Operation
    int z = 50;
    cout << "Value of z is: " << z << endl;
    z *= 3;
    cout << "New Value of z is: " << z << endl;
  // Division Operation
    int p = 50;
    cout << "Value of p is: " << p << endl;
    p /= 3;
    cout << "New Value of p is: " << p << endl;
  // Modulus operation
    int q = 50;
    cout << "Value of q is: " << q << endl;
    q %= 15;
    cout << "New Value of q is: " << q << endl;

// Hierarchy of priorities for operators [+,-,*,/,%]
  // Example
    int i = 100;
    int j = 25;
    int k = 13;
    int l;
    l = (5*((j % k) + i) / (2 * k)) / 2;
    cout << "Value of l is: " << l << endl;

// ASCII
  // Example
	char Character1 = 'A';
	char Character2 = 'a';
	char Character3 = 'B';
	char Character4 = 'C';
	char Character5 = 'c';
	char Character6 = '+';
	char Character7 = '-';
	char Character8 = '/';
	char Character9 = '*';
	char Character10 = 65;
	char Character11 = 70;
	char Character12 = 68;

	cout << "ASCII Value for Character " << Character1 << " is: " << int(Character1) << endl;
	cout << "ASCII Value for Character " << Character2 << " is: " << int(Character2) << endl;
	cout << "ASCII Value for Character " << Character3 << " is: "  << int(Character3) << endl;
	cout << "ASCII Value for Character " << Character4 << " is: " << int(Character4) << endl;
	cout << "ASCII Value for Character " << Character5 << " is: " << int(Character5) << endl;
	cout << "ASCII Value for Character " << Character6 << " is: " << int(Character6) << endl;
	cout << "ASCII Value for Character " << Character7 << " is: " << int(Character7) << endl;
	cout << "ASCII Value for Character " << Character8 << " is: " << int(Character8) << endl;
	cout << "ASCII Value for Character " << Character9 << " is: " << int(Character9) << endl;
	cout << "Character for ASCII Value " << int(Character10) << " is: " << Character10 << endl;
	cout << "Character for ASCII Value " << int(Character11) << " is: " << Character11 << endl;
	cout << "Character for ASCII Value " << int(Character12) << " is: " << Character12 << endl;

// Escape Characters
	cout << "Sup!\n";  // new line
	cout << "Hello There!\a" << endl;  // bel
}