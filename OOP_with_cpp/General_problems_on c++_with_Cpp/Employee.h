#include<iostream>
#include<string> 

using namespace std;

class Employee
{
protected:
    string name;
    int Emp_Id;
    double Salary;

public:
    Employee();
    Employee(string name, int Emp_Id, double Salary);
    virtual double get_Total_Salary()=0;
    virtual void Print();

    ~Employee();
};
