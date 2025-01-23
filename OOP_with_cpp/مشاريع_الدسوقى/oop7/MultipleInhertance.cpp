#include "MultipleInhertance.h"
#include<iostream>
using namespace std;
Employee::Employee():name("unknown"),job("unknown"),salary(0.0)
{
}

Employee::Employee(string n, string j, float s):name(n),job(j),salary(s)
{
}

void Employee::set_name(string n)
{
    name=n;
}

void Employee::set_job(string j)
{
    job=j;
}

void Employee::set_salary(float s)
{
    salary=s;
}

string Employee::get_name()
{
    return name;
}

string Employee::get_job()
{
    return job;
}

float Employee::get_salary()
{
    return salary;
}

void Employee::display()
{
    cout << "Name: " << name << endl;
    cout << "Job: " << job  << endl;
    cout << "Salary: " << salary << endl;
}

Student::Student():department("unkown"),research_interset("unknown")
{
}

Student::Student(string d, string ra):department(d),research_interset(ra)
{
}

void Student::set_name(string n)
{
    name = n;
}

void Student::set_department(string d)
{
    department=d;
}

void Student::set_research_interset(string ra)
{
    research_interset=ra;
}

string Student::get_name()
{
    return name;
}

string Student::get_department()
{
    return department;
}

string Student::get_research_interset()
{
    return research_interset;
}

void Student::display()
{
    cout<<"Department: "<<department<<endl;
    cout<<"Research_interset: "<<research_interset<<endl;
}

TeachingAssistant::TeachingAssistant(string n, string j, float s, string d, string ra):Employee(n,j,s),Student(d,ra)
{
}

void TeachingAssistant::disply()
{
    Employee::display();
    Student::display();
}
