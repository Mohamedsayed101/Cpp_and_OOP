#include "inhertance.h"
#include <iostream>
using namespace std;
Person::Person() : name("unknown"), age(0.0), gender("unknown")
{
    cout<<"Hello\n";
}

Person::Person(string n, float a, string gend) : name(n), age(a), gender(gend)
{
}

void Person::set_name(string n)
{
    name = n;
}

void Person::set_age(float a)
{
    age = a;
}

void Person::set_gender(string gend)
{
    gender = gend;
}

string Person::get_name()
{
    return name;
}

float Person::get_age()
{
    return age;
}

string Person::get_gender()
{
    return gender;
}

void Person::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
}
