#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1(50);
    Account account2(25);

    cout << "Account1 balance: " << account1.getBalance() <<endl;
    cout << "Account2 balance: " << account2.getBalance() <<endl;

    int withdrawAmount;

    cout << "\nEnter withdraw amount for account1: ";
    cin >> withdrawAmount;
    account1.debit(withdrawAmount);

    cout << "Account1 balance: " << account1.getBalance() <<endl;
    cout << "Account2 balance: " << account2.getBalance() <<endl;

    cout << "\nEnter withdraw amount for account2: ";
    cin >> withdrawAmount;
    account2.debit(withdrawAmount);

    cout << "Account1 balance: " << account1.getBalance() <<endl;
    cout << "Account2 balance: " << account2.getBalance() <<endl;



    return 0;
}
