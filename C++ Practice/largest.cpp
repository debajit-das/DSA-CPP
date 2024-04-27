// Write a Program to Find the Largest Among 3 Numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << a << " is the largest number";
    }
    else if (b > c)
    {
        cout << b << " is the largest number.";
    }
    else
    {
        cout << c << " is the largest number.";
    }

    return 0;
}