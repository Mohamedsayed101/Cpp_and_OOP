#include <iostream>
#include <string>
/*
Write a recursive function that finds the #n integer of the Fibonacci
sequence.
*/
using namespace std;

// Function to find nth Fibonacci number
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n);

    return 0;
}