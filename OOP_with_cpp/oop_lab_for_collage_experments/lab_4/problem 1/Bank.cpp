#include "Bank.h"
#include <iostream>
using namespace std;
int BankAccount::accountCounter = 0;
void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance is $" << balance << endl;
    }
    else
    {
        cout << "Invalid deposit amount." << endl;
    }
}
void BankAccount::Withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrew $" << amount << ". Remaining balance is $" << balance << endl;
    }
    else
    {
        cout << "Invalid withdrawal amount or insufficient balance." << endl;
    }
}
BankAccount::BankAccount(string accountholder, int accountNumber, double balance) : accountholder(accountholder), balance(balance), accountNumber(accountNumber)
{
    accountCounter++;
}
BankAccount::BankAccount() : accountholder(""), balance(0.0), accountNumber(0)
{   accountCounter ++;
}

int BankAccount::getAcountCounter()
{
    return accountCounter;
}

void BankAccount::ShowAccountDetails()
{
    cout << "Account holder: " << accountholder << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Balance: $" << balance << endl;
    cout<<"----------------------------------------------------------------"<<endl;
}

BankAccount::~BankAccount()
{
    cout << "Account with account number " << accountNumber << " has been closed." << endl;
    accountCounter--;
}
