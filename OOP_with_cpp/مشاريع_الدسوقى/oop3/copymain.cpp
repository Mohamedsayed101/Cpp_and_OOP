// main function
#include <iostream>
#include "copydefault.h"
using namespace std;
int main()
{
    Distance d1;
    d1.getdistance();
    Distance d2(11,12.3);
    d2.getdistance();
    Distance d3(d2);
    d3.getdistance();
    d3.setdistance(12,34.4);
    Distance d4=d3;
    d4.getdistance();
    return 0;
}