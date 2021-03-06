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


void FunctionsDemo() {
    cout << "3 + 4 = " << sum(3, 4) << endl;
}

void StringsDemo() {
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
}

void CollectionsDemo() {
    vector<int> vi;
    for (int i = 0; i < 10; i++) {
        vi.push_back(i);
    }

    for (auto item : vi)
    {
        cout << item << " ";
    }

    cout << endl;

    for (auto i = begin(vi); i != end(vi); i++) // begin, end - free function
    {
        cout << *i << " ";
    }

    cout << endl;
}

void FunctionTakesCopyOfObjectAsParamater(Transaction t, string newMarker) {
    t.Marker = newMarker;
}

void FunctionTakesObjectByReferenceAsParameter(Transaction& t, string newMarker) {
    t.Marker = newMarker;
}

void FunctionTakesObjectByReferenceAsParameterThatCannotBeChanged(const Transaction& t) {
    //t.Marker = "This will cause a compilation error";
}

void ClassesDemo() {
    Account a1;
    a1.Deposit(100);
    for (auto t : a1.Report()) {
        cout << t << endl;
    }

    a1.Withdraw(30);
    for (auto t : a1.Report()) {
        cout << t << endl;
    }

    cout << "Balance is: " << a1.GetBalance() << "$" << endl;

    Transaction test(10, "Init");
    string newMarker = "Altered Transaction";
    cout << "Old marker: " << test.Marker << endl;
    FunctionTakesCopyOfObjectAsParamater(test, newMarker);
    cout << "[Parameter Copy] New marker: " << test.Marker << endl;
    FunctionTakesObjectByReferenceAsParameter(test, newMarker);
    cout << "[Parameter by Reference] New marker: " << test.Marker << endl;
}

void CastingDemo() {
    // static_cast<>
    // dynamic_cast<>
    // const_cast<>
    // reinterpret_cast<>
    int i;
    i = static_cast<int>(4.9); // fractional part will be lost
    cout << "Static cast of 4.9 to int: " << i << endl;
}

void LegacyDemo() {
    // Macros - is just textual substitution made by compiler`s preprocessor
    #define Pi 3.14
    #define Sqr(x) (x*x) // Dangerous: Sqr(1+1) will be compiled to (1+1*1+1) which is 3 not 4

    // C style Arrays
    int numbers[4];
    double fractions[] = { 1.0, 2.4, 2 };

    // C style Strings
    // has extra space at the end that holds the null-terminator '\0' which is used to define the end of the string
    char* oldString;

    // Output
    printf("Some shit with format: %s\n", "Do it!");

    // Typedef - sets up synonyms that appear to be new types, but are just new names for existing ones
    typedef int BOOL;
    BOOL boolTest = 1;
    typedef vector<int> VectorOfInt;
    VectorOfInt intVector;

    // Pointers
    int* pi; // pointer to int
    int *pi2; // no difference
    
    int j = 7;
    pi = &j; // "address of" j
    *pi = 3; // "content of" pi
    // when incrementing a pointer it points to something else (when you do "++" the pointer goes by the size of its datatype)
    // "->" after a pointer-to-object is like "(*pointer)."
}

int main()
{
    //FunctionsDemo();

    //StringsDemo();

    //CollectionsDemo();

    //ClassesDemo();

    //CastingDemo();

    LegacyDemo();

    return 0;
}

