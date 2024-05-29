// Positive, Negative, or Zero: Write a program that asks the user for a number and classifies it as positive, negative, or zero using nested if-else statements.

#include <iostream>

using namespace std;

int main()
{
    double number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << number << " is positive." << endl;
    }
    else if (number < 0)
    {
        cout << number << " is negative." << endl;
    }
    else
    {
        cout << number << " is zero." << endl;
    }

    return 0;
}
