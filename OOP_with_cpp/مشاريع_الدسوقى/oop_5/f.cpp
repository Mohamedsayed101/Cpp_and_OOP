#include<iostream>
#include "mo.h"
using namespace std;

int main()
{
    Distance d1(5,2.0);
    Distance d2(1,2.0);
    Distance d3 = d1+d2;
    d3.print();
    d3 = d1 - d2;
    d3.print();
    d3 = d1 * d2;
    d3.print();
    d3 = d1 / d2;
    d3.print();
    return 0;
}