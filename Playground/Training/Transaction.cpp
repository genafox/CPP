#include "stdafx.h"
#include "Transaction.h"

using namespace std;

Transaction::Transaction(int amount, string type)
{
    this->amount = amount;
    this->type = type;
    this->Marker = "Transaction";
}

string Transaction::Report() const // indicates that this function does not change any of class`s members
{
    string report;
    report += "    ";
    report += type;
    report += " ";
    report += to_string(this->amount);

    return report;
}
