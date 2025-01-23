// car.cpp
#include "mobil.h"
#include <iostream>
using namespace std;
void Mobile::setmaker(string mk)
{
    maker = mk;
}
string Mobile::getmaker()
{
    return maker;
}
void Mobile::setmodel(int mo)
{
    model = mo;
}
int Mobile::getmodel()
{
    return model;
}
void Mobile::setcolor(string col)
{
    color = col;
}
string Mobile::getcolor()
{
    return color;
}
void Mobile::setprice(float pric)
{
    price = pric;
}
float Mobile::getprice()
{
    return price;
}
//default constructor 
Mobile::Mobile() : maker("OPPO"), model(2023), color("Bule"), price(1200.0)
{
    cout << "Hello" << endl;
}
 //parameterized constructor 1
Mobile::Mobile(string mak,int mod,string col,float pric) : maker(mak), model(mod), color(col), price(pric)
{
    cout << "hello" << endl;
}
 //parameterized constructor 2 if we pass 3 arguments only
Mobile::Mobile(string mak, int mod, string col) : maker(mak), model(mod), color(col)
{
    cout << "HELLO" << endl;
}
//destructor 1 to prevent memory leak
Mobile::~Mobile()
{
    cout << "Goodbye" << endl;
}
