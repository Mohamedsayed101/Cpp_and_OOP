#include<iostream>
#include<string>
/*
Write a recursive function that calculate the Power value for a
specific values of base and exponent given by user
*/
using namespace std;
int Power(int base, int exponent) {
    if(exponent == 0)
        return 1;
    else
        return base * Power(base, exponent - 1);
}
int main() {
    int base;
    cout << "Enter the base: ";
    cin >> base;
    int exponent;
    cout << "Enter the exponent: ";
    cin >> exponent;
    int result = Power(base, exponent);
    // Display the result
    cout << "Result: " << result << endl;
    return 0;
}
