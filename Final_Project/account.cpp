#include <iostream>
#include <limits> 
#include "account.hpp"
using namespace std;



void Account::openAccount(){
    string s;
    cout<<"Enter First Name: ";
    getline(cin,s);
    firstName = s;
    cout<<"Enter Last Name: ";
    getline(cin,s);
    lastName = s;
    cout<<"Enter Initial Balance: ";
    getline(cin,s);
    // Add Exception Handling
    balance = stod(s);
    accNum = ++runningAccNum;
    cout<<endl; 
};

int Account::getAccNum(){
    return accNum;
};

void Account::deposit(double d){
    balance += d;
};

void Account::withdraw(double w){
    balance -= w;
};

ostream& operator<<(ostream& os, Account& acc) {
    os << "First Name: " << acc.firstName << '\n'
       << "Last Name: " << acc.lastName << '\n'
       << "Account Number: " << acc.accNum << '\n'
       << "Balance: " << acc.balance << '\n';
    return os;
}

istream& operator>>(istream& is, Account& acc) {
    std::string label;

    // First Name
    std::getline(is, label, ':'); // read until ':'
    if (!is) return is;           // handle EOF or bad read
    std::getline(is >> std::ws, acc.firstName);

    // Last Name
    std::getline(is, label, ':');
    std::getline(is >> std::ws, acc.lastName);

    // Account Number
    std::getline(is, label, ':');
    is >> acc.accNum;
    is.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // skip rest of line

    // Balance
    std::getline(is, label, ':');
    is >> acc.balance;
    is.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // skip rest of line

    return is;
};

int Account::runningAccNum = 0;

