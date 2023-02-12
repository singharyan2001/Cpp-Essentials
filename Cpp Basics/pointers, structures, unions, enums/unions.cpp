/*
    Author: Aryan Singh
    Topic: Union
*/

#include<iostream>
using namespace std;

union car
{
    /* data */
    int car_age;
    char car_color;
    float car_cost;
};


int main(){

    union car c1;
    c1.car_age = 4;
    //c1.car_cost = 120'000;
    cout << "Car age is: " << c1.car_age <<endl;
    //cout << "Car cost is: " << c1.car_cost <<endl;

    return 0;
}
