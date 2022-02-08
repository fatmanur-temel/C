#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(int initialBalance)
{
    if(initialBalance >= 0)
        balance = initialBalance;
    else
    {
        balance = 0;
        cout << "Initial balance is invalid\n" << endl;
    }
}

void Account::credit(int amount)
{
    balance = balance + amount;
}

void Account::debit(int amount)
{
    if(amount > balance)
        cout << "Debit amount exceeded account balance\n"<<endl;
    else{
        balance = balance-amount;
    }
}

int Account::getBalance()
{
    return balance;
}




