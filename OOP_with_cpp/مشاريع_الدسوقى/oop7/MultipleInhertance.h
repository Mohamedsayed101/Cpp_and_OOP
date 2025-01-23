#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    string name;
    string job;
    float salary;
public:
    Employee();
    Employee(string n,string j,float s);
    void set_name (string n);
    void set_job(string j);
    void set_salary(float s);
    string get_name();
    string get_job();
    float get_salary();
    void display();
};

class Student
{
private:
    string name;
    string department;
    string research_interset;
public:
    Student();
    Student(string d, string ra);
    void set_name(string n);
    void set_department(string d);
    void set_research_interset(string ra);
    string get_name();
    string get_department();
    string get_research_interset();
    void display();
};

class TeachingAssistant: public Employee ,public Student
{
private:
    
public:
    TeachingAssistant(string n, string j, float s, string d, string ra);
    void disply();
};

