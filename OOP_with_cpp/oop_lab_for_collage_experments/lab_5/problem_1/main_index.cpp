#include<iostream>
#include "index.h"
#include<string>
using namespace std;
int main()
{
    Processor p1(5);
    Processor p2 = p1;
    p2.process();
    cout << p2.getValue(); // Should output 30
    return 0;
}