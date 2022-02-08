#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    public:
        Account(int);
        void credit(int);
        void debit(int);
        int getBalance();
    private:
        int balance; // data member
};

#endif // ACCOUNT_H
