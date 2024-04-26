// Write a Program to Swap Two Numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of first number: ";
    cin >> a;
    cout << "Enter the valur of second number: ";
    cin >> b;
    cout << "Before swapping value of first number is : " << a << endl;
    cout << "Before swapping value of second number is : " << b << endl;

    a = a - b;
    b = a + b;
    a = b - a;
    cout << "After swapping value of first number is : " << a << endl;
    cout << "After swapping value of second number is : " << b << endl;

    return 0;
}