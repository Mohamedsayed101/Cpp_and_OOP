#include<iostream>
#include<string>
/*
Write a user-defined function called GDC that calculates the great common divisor for two
given values read from the user using recursion
*/
using namespace std;

int GDC(int a, int b){
    if(b==0)
        return a;
    else
        return GDC(b, a%b);
}
int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << GDC(num1, num2) << endl;
    return 0;
}