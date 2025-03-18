#include<iostream>
#include<string> 
#include "Employee.h"
#include "Sales.h"
#include "Engineer.h"
using namespace std;

int main()
{
    // must be it will pointer because ploymarphism
    Employee *e1;
    Sales s1("Mohamed",1234,10000,50000,0.10);
    Engineer Eng1("Sayed",1235,20000,"Front-end dev",4,48,10);
    e1=&s1;
    cout<<"Total salary: "<<e1->get_Total_Salary()<<endl;
    e1->Print();
    cout<<"---------------------------------------\n";
    e1=&Eng1;
    cout<<"Total salary: "<<e1->get_Total_Salary()<<endl;
    e1->Print();

    return 0;
}