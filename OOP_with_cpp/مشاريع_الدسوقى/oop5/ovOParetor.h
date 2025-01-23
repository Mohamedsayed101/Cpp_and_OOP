#pragma once
#include<string>
#include<iostream>
using namespace std;
// class Counter
// {
//     private:
//         unsigned int count ; 
//     public:
//         Counter():count (0)
//         {};
//         Counter(int c):count(c)
//         {};
//         int getCounter();
//         Counter operator ++();
//         Counter operator --();
//         Counter operator ++(int);
//         Counter operator --(int);
// };
//=================================
class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance();
        Distance(int feet,int inches);
        void print();
        Distance operator + (Distance d2);
        Distance operator - (Distance d2);
        Distance operator * (Distance d2);
        Distance operator / (Distance d2);
};