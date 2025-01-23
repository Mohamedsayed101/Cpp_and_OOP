#include "passObject.h"
#include<iostream>
using namespace std;
int main()
{
    Distance obj1(11,13.9);
    Distance obj2(19, 10.1);
    Distance d3 = obj1.add_distance(obj2);
    d3.getdistance();
    return 0;
}