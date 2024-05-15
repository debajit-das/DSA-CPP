// Write a Program to Check Whether a Number Is a Palindrome or Not.

#include <iostream>
using namespace std;

void palindrome(string str)
{
    int flag = 0;
    int len = str.length();
    cout << len << endl;
    for (int i = len - 1, j = 0; i >= 0, j <= len; i--, j++)
    {
        if (str[j] != str[i])
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << str << " is palindrome";
    }
    else
    {
        cout << str << " is not palindrome";
    }
}

int main()
{
    string str;
    cout << "Enetr the number or string: ";
    cin >> str;
    palindrome(str);
    cout << endl;

    return 0;
}
