#pragma once
#include<string>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance();
    Distance(int f, float i);
    void setdistance(int f, float i);
    void getdistance();
    Distance add_distance(Distance d2);
    ~Distance();
};