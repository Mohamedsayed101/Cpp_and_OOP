// main function
#include <iostream>
#include "car.h"
using namespace std;
int main()
{
    Car c1;
    c1.setmaker("Honda");
    c1.setmodel(2020);
    c1.setcolor("Red");
    cout << "The car maker is " << c1.getmaker() << endl;
    cout << "The car model is " << c1.getmodel() << endl;
    cout << "The car color is " << c1.getcolor() << endl;
    cout << "num of cars is " << c1.GetCount() << endl;
    Car c2;
    cout << "num of cars is " << c2.GetCount() << endl;
    Car c3;
    cout << "num of cars is " << c3.GetCount() << endl;
    

    return 0;
};