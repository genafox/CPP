// GuessNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int answer = 7;
    int guess;

    cout << "Enter your guess" << endl;
    cin >> guess;
    while (answer != guess)
    {
        cout << "Guess is not correct." << " ";
        if (guess > answer) {
            cout << "It is bigger." << " ";
        }

        if (guess < answer) {
            cout << "It is smaller." << " ";
        }

        cout << "Enter another one." << endl;

        cin >> guess;
    }

    cout << "Congratulations! You have guessed the number!" << endl;

    return 0;
}

