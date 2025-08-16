#pragma once
#include <vector>
#include "account.hpp"
using namespace std;

class AccountManager{
    private:
        vector<Account> allAccounts;
    public:
        AccountManager();
        vector<Account> getAllAccounts();
        void addAccount(Account acc);
        ostream& showAllAccounts(ostream& os);
        ostream& closeAccount(ostream&os);
        ostream& balanceEnquiry(ostream& os);
        ostream& depositMoney(ostream&os);
        ostream& withdrawMoney(ostream&os);
        friend ofstream& writeAccountsToFile(ofstream& ofs, AccountManager& accMan);
        friend ifstream& readAccountsFromFile(ifstream& ifs, AccountManager& accMan);
};