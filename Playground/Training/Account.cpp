#include "stdafx.h"
#include "Account.h"

using namespace std;

Account::Account()
{
    this->balance = 0;
}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(this->balance));
    report.push_back("Transactions");
    for (auto t : this->log) {
        report.push_back(t.Report());
    }
    
    report.push_back("-----------------------");

    return report;
}

bool Account::Deposit(int amount)
{
    if (amount > 0) {
        this->balance += amount;
        Transaction t(amount, "Deposit");
        this->log.push_back(t);

        return true;
    }

    return false;
}

bool Account::Withdraw(int amount)
{
    if (amount > 0) {
        if (this->balance >= amount) {
            this->balance -= amount;
            this->log.push_back(Transaction(amount, "Withdraw"));

            return true;
        }
    }

    return false;
}

//int Account::GetBalance()
//{
//    return this->balance;
//}
