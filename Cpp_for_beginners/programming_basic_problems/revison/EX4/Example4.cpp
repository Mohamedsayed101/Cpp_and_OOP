#include <iostream>
#include <string>
/*
PROBLEM(4)

Define a struct called Employee with the following fields:

name (array of char with size 50)

age (integer)

salary (float)

Write a function called printData that takes a Employee object as an argument

and prints out their information, including their name, age, and salary.

Write call by reference function called readData that takes a Employee object as an argument and ask
user to enter data of Employee.

Write a program that declares an Employee object, and call function readData to ask user enter data,
and call function printData to prints out the information for Employee.
*/
using namespace std;

struct Employee
{
    char name[50];
    int age;
    float salary;
};
void printData(Employee em1)
{
    cout << "Name: " << em1.name << endl;
    cout << "Age: " << em1.age << endl;
    cout << "Salary: " << em1.salary << endl;
}

void readData(Employee &em2)
{
    cout << "Enter Name: ";
    cin.getline(em2.name, 50);
    cout << "Enter Age: ";
    cin >> em2.age;
    cout << "Enter Salary: ";
    cin >> em2.salary;
}
int main()
{
    Employee em;
    readData(em);
    printData(em);
    return 0;
}