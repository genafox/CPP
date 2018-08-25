#include "stdafx.h"
#include "Transaction.h"

using namespace std;

Transaction::Transaction(int amount, string type)
{
    this->amount = amount;
    this->type = type;
}

string Transaction::Report()
{
    string report;
    report += "    ";
    report += type;
    report += " ";
    report += to_string(this->amount);

    return report;
}
