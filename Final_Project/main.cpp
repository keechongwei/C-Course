#include <iostream>
#include <iomanip>
#include "account.hpp"
#include "accountManager.hpp"
#include <vector>
#include <fstream>
using namespace std;

#define MENU()\
    cout<<"***Banking System***"<<endl; \
    cout<<endl; \
    cout<<setw(8)<<""<< "Select one option below"<<endl; \
    cout<<setw(10)<<"1:" << " Open an Account"<<endl; \
    cout<<setw(10)<<"2:"<< " Balance Enquiry"<<endl; \
    cout<<setw(10)<<"3:"<<" Deposit"<<endl; \
    cout<<setw(10)<<"4:"<<" Withdrawal"<<endl; \
    cout<<setw(10)<<"5:"<<" Close an Account"<<endl; \
    cout<<setw(10)<<"6:"<<" Show All Accounts"<<endl; \
    cout<<setw(10)<<"7:"<<" Quit"<<endl; \
    cout<<"Enter your choice: ";

#define DATA_FILE "data.txt"

#include <limits> // for std::numeric_limits

auto readMenuChoice = []() -> int {
    std::string tmp;
    int choice;
    while (true) {
        if (!std::getline(cin, tmp)) { // EOF or error
            return 7; // Exit on error
        }
        try {
            choice = std::stoi(tmp);
        } catch (...) {
            std::cout << "Invalid input. Please enter a number between 1 and 7: ";
            continue;
        }
        if (choice >= 1 && choice <= 7) {
            return choice;
        }
        std::cout << "Please enter a number between 1 and 7: ";
    }
};

int main(){
    AccountManager accMan;
    ifstream ifs(DATA_FILE);
    if (ifs.is_open()) {
        readAccountsFromFile(ifs,accMan);
    } else {
        cout << "No data.txt file exists.\n";
    }
    if (accMan.getAllAccounts().empty() == 0){
        Account::runningAccNum = accMan.getAllAccounts().back().getAccNum();
    }
    string tmp = "";
    int choice = 0;
    MENU();
    choice = readMenuChoice();
    while(choice<=7 && choice> 0){
        switch(choice){
            case 1: {
                Account acc = Account();
                acc.openAccount();
                cout<<"Congratulations! Account is created with the following details: "<<endl;
                cout<<acc<<endl;
                accMan.addAccount(acc);
                break;
            }
            case 2: {
                accMan.balanceEnquiry(cout);
                break;
            }
            case 3: {
                accMan.depositMoney(cout);
                break;
            }
            case 4: {
                accMan.withdrawMoney(cout);
                break;
            }
            case 5: {
                accMan.closeAccount(cout);
                break;
            }
            case 6: {
                accMan.showAllAccounts(cout);
                break;
            }
            case 7: {
                ofstream ofs(DATA_FILE, ios::trunc);  
                writeAccountsToFile(ofs,accMan);
                return 0;
            }
            default:
                ofstream ofs(DATA_FILE, ios::trunc);
                writeAccountsToFile(ofs,accMan);
                break;
        }
        MENU();
        choice = readMenuChoice();
    }
    cout<<"Unknown Option. Input Not Between 1 and 7. Exiting..."<<endl;
    return 0;
}