#pragma once
#include<iostream>
using namespace std;
#include<string>
class Person 
{
    private:
        string name;
        float age;
        string gender;
    public:
        Person();
        Person(string n,float a,string gend );
        void set_name(string n);
        void set_age(float a);
        void set_gender(string gend);
        string get_name();
        float get_age();
        string get_gender();
        void display();
};

