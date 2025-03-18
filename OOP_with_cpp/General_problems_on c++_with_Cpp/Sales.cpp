#include "Sales.h"


Sales::Sales():Employee(),Gross_sales(0.0),commission_sales(0.0)
{
    cout<<"default Sales constructor is called. "<<endl;
}
Sales::Sales(string name, int Emp_Id, double Salary,float Gross_sales,float comission_sales):Employee(name, Emp_Id, Salary)
{
    cout<<"paramtrized Sales constructor is called. "<<endl;
}

double Sales::get_Total_Salary()
{
    // salary+ Gross_sales*commission_rate
    return (Salary+Gross_sales*commission_sales) ;
}

void Sales::Print()
{
    Employee::Print();
    cout<<"Gross Sales = "<<Gross_sales<<endl;
    cout<<"Commission Sales rate = "<<commission_sales<<endl;
}

void Sales::setGross_sales(float value)
{
    Gross_sales=value; 
}
void Sales::setCompletion_sales(float value){
    commission_sales=value;
}

Sales::~Sales()
{
    cout<<"Sales destructor is called. "<<endl;
}
