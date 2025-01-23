#include "student.h"
#include<iostream>
using namespace std;

// Student::Student()
// {
//     cout<<"olala"<<endl;
// }

Student::Student(string n, float a, string gend, string d, float G) : Person(n, a, gend), depart(d), GPA(G)
{
}

void Student::display()
{
    Person::display();
    cout<<"Depart: "<<depart<<endl;
    cout<<"GPA: "<<GPA<<endl;
}
