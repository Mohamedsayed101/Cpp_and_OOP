#include "shape.h"
#include<iostream>
using namespace std;
Shape::Shape():color(c)
{
}
 float Shape::area()
{
    cout<<"Parent class area :"<<endl;
    return 0;
}

 void Shape::draw()
{
    cout << "Draw parent shape in " <<color<<" color"<< endl;
}

 void Shape::erase()
{
    cout<<"Erase the parent shape "<<endl;
}

rectangle::rectangle(int l, int w, string c) : lenght(l), width(w), Shape(c)
{
}

float rectangle::area()
{
    cout<<"The area of rectangle is "<<lenght*width<<endl;
    return (lenght*width);
}

void rectangle::draw()
{
    cout<<"Draw rectangle "<<endl;
}

void rectangle::erase()
{
    cout<<"The rectangle esraed "<<endl;
}

Circle::Circle(int r, string c):radius(r),Shape(c)
{
}

float Circle::area()
{
    cout << "The area of rectangle is " << 3.14 * (radius*radius) << endl;
    return (radius * radius);
}

void Circle::draw()
{
    cout << "Draw circle " << endl;
}

void Circle::erase()
{
    cout << "The circle esraed " << endl;
}
