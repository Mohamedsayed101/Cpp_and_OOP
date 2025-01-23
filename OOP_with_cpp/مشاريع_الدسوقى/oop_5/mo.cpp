#include "mo.h"
#include<iostream>
using namespace std;
void Distance::print()
{
    cout<<"The distance in feet now is "<<feet<<endl;
    cout << "The distance in inches now is " << inches << endl;
    cout<<"------------------------------------"<<endl;
    cout << "------------------------------------" << endl;
}

Distance::Distance():feet(0),inches(0)
{
}

Distance::Distance(int f, float i):feet(f),inches(i)
{
}

Distance Distance::operator + (Distance d2)
{
    int f=feet+d2.feet;
    float i=inches+d2.inches;
    return Distance(f,i);
}
Distance Distance::operator - (Distance d2)
{
    int f = feet - d2.feet;
    float i = inches - d2.inches;
    return Distance(f, i);
}
Distance Distance::operator * (Distance d2)
{
    int f = feet * d2.feet;
    float i = inches * d2.inches;
    return Distance(f, i);
}
Distance Distance::operator / (Distance d2)
{
    int f = feet / d2.feet;
    float i = inches / d2.inches;
    return Distance(f, i);
}
