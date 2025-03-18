#include<iostream>
#include<string> 
#include "Employee.h"

using namespace std;

Employee::Employee():name(""),Emp_Id(0),Salary(0.0){
    cout<<"default Employee constructor is called. "<<endl;
}

Employee::Employee(string name, int Emp_Id, double Salary):name(name),Emp_Id(Emp_Id),Salary(Salary)
{
    cout<<"paramterized Employee constructor is called. "<<endl;
}

void Employee::Print()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<Emp_Id<<endl;
    cout<<"Salary: "<<get_Total_Salary()<<endl;
}
Employee::~Employee()
{
    cout<<"Empolyee destructor is called. "<<endl;
}