#include<iostream>
#include<string> 
#include "Employee.h"
using namespace std;

class Sales: public Employee
{
private:
    float Gross_sales;
    float commission_sales;
public:
    Sales();
    Sales(string name, int Emp_Id, double Salary,float gross_sales, float commission_sales);
    // override
    double get_Total_Salary() override;
    void Print() override;
    void setGross_sales(float value);
    void setCompletion_sales(float value);
    ~Sales();
};


