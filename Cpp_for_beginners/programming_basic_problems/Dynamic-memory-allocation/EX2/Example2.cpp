#include <iostream>
#include <string>

using namespace std;

/*
Task 2

Write c++ program create an array of structs in C++ to represent a group
of Employee, each with a empno and an salary .

Enter values in array

Print array
*/

struct Employee
{
    int empno;
    float salary;
};
int main()
{
    int size;
    cout << "Enter the number of employees: ";
    cin >> size;
    Employee *arr_Employee = new Employee[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter employee" << i + 1 << " details: " << endl;
        cout << "Enter employee number: ";
        cin >> arr_Employee[i].empno;
        cout << "Enter salary: ";
        cin >> arr_Employee[i].salary;
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Employee" << i + 1 << " details: " << endl;
        cout << "number: " << arr_Employee[i].empno << endl;
        cout << "salary: " << arr_Employee[i].salary << endl;
        cout << "----------------------------" << endl;
    }
    cout << endl;
    delete[] arr_Employee; // Deallocating the dynamically allocated memory.

    return 0;
}