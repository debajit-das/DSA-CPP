// Write a Program to Check Whether a Number Is Prime or Not.

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b = 0;
    cout << "Enter any positive number :";
    cin >> a;

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            b = 1;
            break;
        }
    }
    if (a == 0 || a == 1)
    {
        cout << a << " is not a prime number." << endl;
    }
    else if (b == 0)
    {
        cout << a << "  is a prime number.";
    }
    else
    {
        cout << a << " is not a prime number.";
    }

    return 0;
}