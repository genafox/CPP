#pragma once // ensures that this header file is included only once

#include <string>

class Transaction
{
private:
    int amount;
    std::string type;
public:
    std::string Marker;
    Transaction(int amount, std::string type);
    std::string Report() const;
};

