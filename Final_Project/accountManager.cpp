#include <vector>
#include <iostream>
#include <fstream>
#include <limits>
#include <algorithm>
#include "account.hpp"
#include "accountManager.hpp"
using namespace std;


AccountManager::AccountManager(){
    allAccounts = {};
};

vector<Account> AccountManager::getAllAccounts(){
    return allAccounts;
};

ostream& AccountManager::balanceEnquiry(ostream& os){
    string query;
    int num;
    cout<<"Enter Account Number: ";
    getline(cin,query);
    num = stoi(query);
    for (Account a: allAccounts){
        if (a.getAccNum() == num){
             os<<a<<endl;
             return os;
        }
    }
    os<<"Account Not Found."<<endl;
    return os;
};

ostream& AccountManager::depositMoney(ostream&os){
    string query;
    int num;
    double d;
    cout<<"Enter Account Number: ";
    getline(cin,query);
    num = stoi(query);
    cout<<"Enter Amount To Be Deposited: ";
    getline(cin,query);
    d = stod(query);
    // for each passes by value by default, so need to pass by reference instead
    for (Account &a: allAccounts){
        if (a.getAccNum() == num){
             a.deposit(d);
             cout<<"Amount is Deposited."<<endl;
             cout<<a<<endl;
             return os;
        }
    }
    os<<"Account Not Found."<<endl;
    return os;
};
ostream& AccountManager::withdrawMoney(ostream&os){
    string query;
    int num;
    double w;
    cout<<"Enter Account Number: ";
    getline(cin,query);
    num = stoi(query);
    cout<<"Enter Amount To Be Withdrawn: ";
    getline(cin,query);
    w = stod(query);
    for (Account &a: allAccounts){
        if (a.getAccNum() == num){
             a.withdraw(w);
             cout<<"Amount is Withdrawn."<<endl;
             cout<<a<<endl;
             return os;
        }
    }
    os<<"Account Not Found."<<endl;
    return os;
};
void AccountManager::addAccount(Account acc){
    allAccounts.push_back(acc);
};

ostream& AccountManager::closeAccount(ostream& os){
    string tmp;
    int num;
    os<<"Enter Account Number: ";
    cin >> num;
    getline(cin,tmp);
    auto it = find_if(allAccounts.begin(), allAccounts.end(),
        [num](Account& a) { return a.getAccNum() == num; });

    if (it != allAccounts.end()) {
        allAccounts.erase(it);
        os << "Account closed successfully.\n";
    } else {
        os << "Account number not found.\n";
    }

    return os;
};

ostream& AccountManager::showAllAccounts(ostream& os){
    vector<Account>::iterator itr;
    for(itr = allAccounts.begin();itr != allAccounts.end(); itr++){
        os<<*itr<<endl;
    };
    return os;
};

ofstream& writeAccountsToFile(ofstream& ofs, AccountManager& accMan){
    vector<Account>::iterator itr;
    for(itr = accMan.allAccounts.begin();itr != accMan.allAccounts.end(); itr++){
        ofs<<*itr<<endl;
    }
    cout<<"Accounts Written To File"<<endl;
    return ofs;
};

ifstream& readAccountsFromFile(ifstream& ifs, AccountManager& accMan) {
    Account acc;
    while (true) {
        if (!(ifs >> acc)) break; // stop if no more accounts
        accMan.addAccount(acc);

        // Skip blank lines between accounts
        ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Accounts Read From File" << std::endl;
    return ifs;
}