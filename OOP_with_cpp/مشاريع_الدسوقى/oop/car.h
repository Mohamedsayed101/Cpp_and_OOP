#pragma once
#include <string>
using namespace std;
class Car
{
private:
    string maker;
    int model;
    string color;
    static int count;

public:
    int GetCount();
    void setmaker(string mk);
    string getmaker();
    void setmodel(int mo);
    int getmodel();
    void setcolor(string col);
    string getcolor();

    Car();
    ~Car();
};