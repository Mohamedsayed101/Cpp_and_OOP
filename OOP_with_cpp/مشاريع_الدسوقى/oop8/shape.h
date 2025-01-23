#pragma once
#include<iostream>
using namespace std;
 
class Shape
{
    string color;
    public:
        Shape();
        virtual float area();
        virtual void draw();
        virtual void erase();
};

class rectangle: public Shape
{
private:
    int lenght;
    int width;
public:
    rectangle(int l,int w,string c);
    float area();
    void draw();
    void erase();
};

class Circle : public Shape
{
    int radius;
public:
    Circle(int r, string c);
    float area();
    void draw();
    void erase();
};