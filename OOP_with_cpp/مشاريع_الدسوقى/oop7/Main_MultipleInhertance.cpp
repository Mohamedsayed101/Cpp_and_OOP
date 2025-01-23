#include<iostream>
#include "MultipleInhertance.h"
using namespace std;
int main()
{
    TeachingAssistant t1("mohamed","Software Engineer",5000,"IS","IT");
    t1.Employee::set_name("Mohamed");
    t1.Student::set_name("Ali");
    return 0;
}