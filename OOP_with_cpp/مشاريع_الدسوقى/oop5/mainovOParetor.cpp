#include "ovOParetor.h"
#include<iostream>
using namespace std;
int main ()
{
    // Counter c1(3);
    // Counter c2(6);
    // Counter c3= ++c1,c4= --c2;
    // c3 = c1++, c4 = c2--;
    // cout<<c3.getCounter()<<" "<<c4.getCounter()<<endl;
//=====================================================
    Distance d1(7,4);
    Distance d2(5, 3);
    Distance d3=d1+d2;
    d3.print();
    d3=d1-d2;
    d3.print();
    d3=d1*d2;
    d3.print();
    d3 = d1 / d2;
    d3.print();
    return 0;

}