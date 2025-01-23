#include<iostream>
#include "index.h"
#include<string>
using namespace std;

Data::Data(int value): value(value)
{
}

Data::~Data()
{
}

Processor::Processor(int value) : d(value) {}

Processor::Processor(const Processor &p) : d(p.d.value * 3) {}

int Processor::getValue() {
    return d.value;
}

void Processor::process() {
    d.value *= 2;
}

Processor::~Processor() {}
