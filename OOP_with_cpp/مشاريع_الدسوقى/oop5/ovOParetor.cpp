#include "ovOParetor.h"
#include<iostream>
using namespace std;
// int Counter::getCounter()
// {
//     return count;
// }

// Counter Counter::operator++()
// {
//     ++count;
//     return Counter(count);
// }

// Counter Counter::operator--()
// {
//     --count;
//     return Counter(count);
// }
// Counter Counter::operator++(int)
// {
//     count++;
//     return Counter(count);
// }

// Counter Counter::operator--(int)
// {
//     count--;
//     return Counter(count);
// }
//======================================

Distance::Distance() : feet(0), inches(0)
{ 

}
Distance::Distance(int f, int i) : feet(f), inches(i)
{

}

void Distance::print()
{
    cout << "feet " << feet << " ||inches " << inches << endl;
    cout<<"--------------------------------"<<endl;
}

Distance Distance::operator + (Distance d2)
{
    int f = feet + d2.feet;
    int i = inches + d2.inches;
    return Distance(f, i);
}
Distance Distance::operator - (Distance d2)
{
    int f = feet - d2.feet;
    int i = inches - d2.inches;
    return Distance(f, i);
}
Distance Distance::operator * (Distance d2)
{
    int f = feet * d2.feet;
    int i = inches * d2.inches;
    return Distance(f, i);
}
Distance Distance::operator / (Distance d2)
{
    int f = feet / d2.feet;
    int i = inches / d2.inches;
    return Distance(f, i);
}