#include<iostream>
#include "Bank.h"
#include<string>
using namespace std;
int main() {

    BankAccount b1("Mohamed sayed",2032,10000);
    b1.deposit(5000);
    b1.Withdraw(2000);
    b1.ShowAccountDetails();
    BankAccount b2("Ahmad al-Khalifa",4567,5000);
    b2.deposit(1000);
    b2.Withdraw(3000);
    b2.ShowAccountDetails();
    cout<<"Total number of accounts: "<<b1.getAcountCounter()<<endl; // Output: Total number of accounts: 2

    return 0;
}