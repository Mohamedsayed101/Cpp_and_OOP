#include "Engineer.h"

Engineer::Engineer():Employee(),specially(""),Experience(0),overtime_hours(0),overtime_hours_rate(0.0)
{
    cout<<"default Engineer constructor is called. "<<endl;
}
Engineer::Engineer(string name, int Emp_Id, double Salary,string specially, int Experience, float overtime_hours, float overtime_hours_rate)
:Employee(name, Emp_Id, Salary)
,specially( specially),Experience(Experience),overtime_hours(overtime_hours),overtime_hours_rate(overtime_hours_rate)
{
    cout << "paramtrized Engineer constructor is called. " << endl;
}
double Engineer::get_Total_Salary()
{
    //salary+(overtime_hours_rate*overtime_hours)
    return (Salary + overtime_hours*overtime_hours_rate );
}

void Engineer::Print()
{
    Employee::Print();
    cout<<"OverTime hours: "<<overtime_hours<<endl;
    cout<<"Overtime hours rate: "<<overtime_hours_rate<<endl;
}

void Engineer::Set_OverTime_Hours(float Hours)
{
    overtime_hours = Hours;
}
void Engineer::Set_OverTime_Hours_rate(float Hours_rate){
    overtime_hours_rate = Hours_rate;
}
Engineer::~Engineer()
{
    cout << "Engineer destructor is caled. " << endl;
}
