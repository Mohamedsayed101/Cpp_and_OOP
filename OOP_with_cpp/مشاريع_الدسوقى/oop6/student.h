#pragma once
#include<string>
#include "inhertance.h"
class Student: public Person
{
    private: 
        string depart;
        float GPA;
    public:
        // Student();
        Student(string n, float a, string gend,string d, float G);
        void display();
};