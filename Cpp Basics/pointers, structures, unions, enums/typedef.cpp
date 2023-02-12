/*
    Author: Aryan Singh
    Topic: Typedef with structures
*/

#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int employeeID;
    int age;
    float salary;
} ep;


int main(){

    ep aryan;
    aryan.employeeID = 1;
    aryan.age = 21;
    aryan.salary = 600'000.00;

    ep Aakash;
    Aakash.employeeID = 2;
    Aakash.age = 25;
    Aakash.salary = 800'000.00;

    cout << "EmployeeId: " << aryan.employeeID <<endl;
    cout << "age: " << aryan.age <<endl;
    cout << "Salary: " << aryan.salary <<endl;

    cout << "EmployeeId: " << Aakash.employeeID <<endl;
    cout << "age: " << Aakash.age <<endl;
    cout << "Salary: " << Aakash.salary <<endl;

    return 0;
}
