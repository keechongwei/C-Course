#pragma once
#include <iostream>

using namespace std;

class Account{
    private:
        string firstName;
        string lastName;
        int accNum;
        double balance;
    public:
        static int runningAccNum;
        friend ostream& operator<<(ostream& ofs, Account& acc);
        friend istream& operator>>(istream& is, Account& acc);
        void openAccount();
        int getAccNum();
        void deposit(double d);
        void withdraw(double w);
};
