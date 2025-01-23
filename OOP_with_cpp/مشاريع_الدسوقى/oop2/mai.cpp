// main function
#include <iostream>
#include "mobil.h"
using namespace std;
int main()
{
    Mobile m1;
    // Mobile m1("summsung",2010,"Red",10000);
    cout << "The mobile maker is " << m1.getmaker() << endl;
    cout << "The mobile model is " << m1.getmodel() << endl;
    cout << "The mobile color is " << m1.getcolor() << endl;
    cout << "The mobile price is " << m1.getprice() << endl;
    cout << "-------------------------------" << endl;
    // m1.setmaker("oop");
    // m1.setmodel(2020);
    // m1.setcolor("Red");
    // m1.setprice(1280.39);
    // cout << "The mobile maker is " << m1.getmaker() << endl;
    // cout << "The mobile model is " << m1.getmodel() << endl;
    // cout << "The mobile color is " << m1.getcolor() << endl;
    // cout << "The mobile price is " << m1.getprice() << endl;
    cout << "-------------------------------" << endl;

    return 0;
};