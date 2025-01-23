#pragma once
#include <string>
using namespace std;
class Mobile
{
private:
    string maker;
    int model;
    string color;
    float price;

public:
    void setmaker(string mk);
    string getmaker();
    void setmodel(int mo);
    int getmodel();
    void setcolor(string col);
    string getcolor();
    void setprice(float pric);
    float getprice();
    Mobile();
    Mobile(string mak, int mod, string col, float pric);
    Mobile(string mak, int mod, string col);
    ~Mobile();
};