// Write a Program to Swap Two Numbers Using a Function.

#include <iostream>
using namespace std;

void swap(int n1, int n2)
{
    cout << "Before swapping the first number is : " << n1 << " and second number is : " << n2 << endl;

    n1 = n1 - n2;
    n2 = n1 + n2;
    n1 = n2 - n1;
    cout << "After swapping the first number is : " << n1 << " and second number is : " << n2 << endl;
}

int main()
{
    int n1, n2;
    cout << "Enter the first number : ";
    cin >> n1;
    cout << "Enter the second number : ";
    cin >> n2;

    swap(n1, n2);

    return 0;
}