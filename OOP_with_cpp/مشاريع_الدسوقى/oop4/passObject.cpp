#include "passObject.h"
#include <iostream>
using namespace std;
Distance::Distance() : feet(0), inches(0.0)
{
    cout << "hello" << endl;
}

Distance::Distance(int f, float i) : feet(f), inches(i)
{
    cout << "Hello" << endl;
}

void Distance::setdistance(int f, float i)
{
    feet = f;
    inches = i;
}

void Distance::getdistance()
{
    cout << "the distance in feet is " << feet << endl;
    cout << "the distance in inches is " << inches << endl;
    cout << "------------------------------------\n";
}

Distance::~Distance()
{
    cout << "Goodbye\n";
}

Distance Distance::add_distance(Distance d2)
{
    Distance result ;
    result.feet = feet + d2.feet;
    result.inches=inches+d2.inches;
    return result;
}
