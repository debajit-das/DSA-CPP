// Write a Program to Check Whether a Number Is a Palindrome or Not.

#include <iostream>
using namespace std;

// Function for reversing
void reverse(string str)
{
    char rev[3];
    int flag = 0;
    int len = str.length();
    for (int i = len, j = 0; i >= 0, j <= len; i--, j++)
    {
        if (rev[j] != str[i])
        {
            // cout << "hi i am inside codition";da
            flag = 1;
        }
    }

    // cout << rev[j];

    if (flag == 0)
    {
        cout << str << " is palindrome";
    }
    else
    {
        cout << str << " is not palindrome";
    }
}
// cout << "rev" << rev << endl;
// if (str == rev)
// {
//     cout << "The number / string is a palindrome." << endl;
// }
// else
// {
//     cout << "The number / string is not a palindrome." << endl;
// }

int main()
{
    string str;
    cout << "Enetr the number or string: ";
    cin >> str;
    // string temp = str;

    // cout << "After reversing new number / string is: ";
    reverse(str);
    cout << endl;

    // if (str == temp)
    // {
    //     cout << "The number / string is a palindrome."  << endl;
    // }
    // else
    // {
    //     cout << "The number / string is not a palindrome." << endl;
    // }

    return 0;
}
// 0 1 2
// k o u

// 2 1 0
// u o k