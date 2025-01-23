/*
Defines a class Data with a private integer value.
Defines a class Processor as a friend class to Data.
Processor has a member function process() that doubles the value in a Data object.
Implements a custom copy constructor for Processor that triples the value of the Data object during copying.
*/


#include<iostream>
#include<string>
using namespace std;
class Processor;
class Data
{
private:
    int value;
public:
    friend class Processor;
    Data(int value);
    ~Data();
};

class Processor
{
private:
    Data d;
public:
    Processor(int value);
    Processor(const Processor &p);
    int getValue();
    void process();
    ~Processor();
};

