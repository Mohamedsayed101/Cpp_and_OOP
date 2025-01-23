#include <iostream>
#include <string>
/*
Write a user-defined function called GDC that calucates the great common divisor for two
given values read from the user
*/
using namespace std;

int GCD(int a, int b)
{
    if (a > b)
        return (a % b == 0 ? b : a % b);
    else
        return (b % a == 0 ? a : b % a);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << GCD(num1, num2) << endl;

    return 0;
}