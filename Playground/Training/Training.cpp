// Training.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // <header from standard library>
#include <string>
#include <vector>
#include <algorithm>
#include "Functions.h" // "user written header"
#include "Account.h";

using namespace std;

int main()
{
    // Funcitons & Headers
    cout << "3 + 4 = " << sum(3, 4 ) << endl;

    // Strings
    cout << "Who are you?" << endl;
    string name;
    cin >> name; // takes word until meets the whitespace character
    string greeting = "Hello, " + name + "!";
    cout << greeting << endl << "Your name is " << name.length() << " characters length" << endl;
    cout << "Enter the full name, please." << endl;
    
    string fullName;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, fullName); // takes the whole line
    
    cout << "Your full name consists of " << fullName.length() << " characters" << endl;

    // Collections
    vector<int> vi;
    for (int i = 0; i < 10; i++) {
        vi.push_back(i);
    }

    for (auto item:vi)
    {
        cout << item << " ";
    }

    cout << endl;

    for (auto i = begin(vi); i != end(vi); i++) // begin, end - free function
    {
        cout << *i << " ";
    }

    cout << endl;

    // Classes
    Account a1;
    a1.Deposit(100);
    for (auto t : a1.Report()) {
        cout << t << endl;
    }

    a1.Withdraw(30);
    for (auto t : a1.Report()) {
        cout << t << endl;
    }


    return 0;
}

