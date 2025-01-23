#include <iostream>
#include <string>

using namespace std;
/*
Task2

Write C++ code to create a function named 'avg' that calculates the sum of
three numbers and returns their average. When calculating the sum, store the
value in dynamically allocated memory.
*/

double avg(double num1, double num2, double num3)
{
    double* sum = new double;
    *sum = num1 + num2 + num3;
    return *sum / 3.0;
    delete sum;  // Deleting the dynamically allocated memory when the function returns
}
int main()
{

    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    double average = avg(num1, num2, num3);
    cout << "Average: " << average << endl;

    return 0;
}