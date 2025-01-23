/*
Exercise/Homework #2

Define a class Employee with private member
variables name and salary. Define getters and setters
for the member variables. The class should have 2
constructors; one default constructor and another that
takes the name and salary as parameters. The class
has a static member variable that stores the total
sum of the salaries of all employees. Two static
variables are also needed to store the highest salary
amongst all employees, and name of the employee
with that salary. Define a static member function that
returns the value of the highest salary and the name of
the employee with the highest salary.
*/

#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    float salary;
    static float Total_sum;
    static float highest_salary;
    static string name_high;

public:
    Employee() : name(""), salary(0.0)
    {
        cout << "Default constructor is called" << endl;
    }
    Employee(string name, float salary) : name(name), salary(salary)
    {
        cout << "Paramter constructor is called" << endl;
        Total_sum += salary;
        if (salary > highest_salary)
        {
            highest_salary = salary;
            name_high = name;
        }
    }
    // getters and setters
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
        Total_sum += salary;
        if (salary > highest_salary)
        {
            highest_salary = salary;
            name_high = this->name;
        }
    }
    float getSalary() { return salary; }

    static float get_total_sum() { return Total_sum; }
    static float get_highest_salary()
    {
        return highest_salary;
    }
    static string get_name_highest_salary()
    {
        return name_high;
    }
    ~Employee() {}
};

float Employee::Total_sum = 0.0;
float Employee::highest_salary = 0.0;
string Employee::name_high = "";

int main()
{
    Employee em1("ali", 1500);
    Employee em2("mohamed", 1600);
    cout << em1.get_total_sum() << endl;
    cout << em1.get_highest_salary() << endl;
    cout << em1.get_name_highest_salary() << endl;
    em1.setSalary(1800);
    cout << em2.get_name_highest_salary() << endl;
    return 0;
}