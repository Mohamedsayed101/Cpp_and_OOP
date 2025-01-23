#pragma once
#include<string>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        void print();
        Distance();
        Distance(int f,float i);
        Distance operator + (Distance d2);
        Distance operator - (Distance d2);
        Distance operator * (Distance d2);
        Distance operator / (Distance d2);
};