#include<iostream>
#include<string> 
#include "Employee.h"

using namespace std;

class Engineer: public Employee
{
private:
    string specially;
    int Experience;
    int overtime_hours;
    float overtime_hours_rate;
public:
    Engineer();
    Engineer(string name, int Emp_Id, double Salary,string specially, int Experience, float overtime_hours, float overtime_hours_rate);
    double get_Total_Salary() override;
    void Print() override;
    void Set_OverTime_Hours(float Hours);
    void Set_OverTime_Hours_rate(float Hours_rate);
    ~Engineer();
};
