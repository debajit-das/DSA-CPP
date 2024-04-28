// Write a Program to Check Whether a Number Is a Palindrome or Not.

#include <iostream>
using namespace std;

// Function for reversing
void reverse(string str)
{
    for (int i = str.length(); i >= 0; i--)
    {
        cout << str[i];
    }
}

int main()
{
    string str;
    cout << "Enetr the number or string: ";
    cin >> str;
    string temp = str;

    cout << "After reversing new number / string is: ";
    reverse(temp);
    cout << endl;

    if (str == temp)
    {
        cout << "The number / string is a palindrome." << endl;
    }
    else
    {
        cout << "The number / string is not a palindrome." << endl;
    }

    return 0;
}