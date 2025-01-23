// car.cpp
#include "car.h"
#include <iostream>
using namespace std;
int Car::count = 0;

int Car::GetCount()
{
    return count;
}
void Car::setmaker(string mk)
{
    maker = mk;
}
string Car::getmaker()
{
    return maker;
}
void Car::setmodel(int mo)
{
    model = mo;
}
int Car::getmodel()
{
    return model;
}
void Car::setcolor(string col)
{
    color = col;
}
string Car::getcolor()
{
    return color;
}
Car::Car()
{
    count++;
}

Car::~Car()
{
     count--;
    
}
