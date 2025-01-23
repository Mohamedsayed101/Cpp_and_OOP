#include<iostream>
#include<string>
using namespace std;
/*
Create a BankAccount class with attributes: accountNumber, balance, accountholder and accountCounter to keep track
of the number of active accounts.
You should be able to create the objects with default values or with values during the initialization
When your object destroyed Display a message indicating the account has been closed.
Write Deposit method to add money to the account.
Write Withdraw method to remove money, ensuring it doesn’t go below zero.
Write ShowAccountDetails method to print the account details.
*/
class BankAccount

{
private:
    string accountholder;
    int accountNumber;
    double balance;
    static int accountCounter;
public:
    void deposit(double amount);
    void Withdraw(double amount);
    BankAccount(string accountholder, int accountNumber, double balance);
    BankAccount ();
    static int getAcountCounter();
    void ShowAccountDetails();
    ~BankAccount ();
};
