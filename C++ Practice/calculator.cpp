// Write a Program to Make a Simple Calculator.

#include <iostream>
using namespace std;

void sum(int a, int b)
{
    cout << "Sum of " << a << " & " << b << " is : " << a + b;
}
void dif(int a, int b)
{
    cout << "Difference of " << a << " & " << b << " is : " << a - b;
}
void mul(int a, int b)
{
    cout << "Product of " << a << " & " << b << " is : " << a * b;
}
void division(int a, int b)
{
    cout << "Dividing " << a << " by " << b << " is : " << a / b;
}
int main()
{

    int a, b;
    char operat;
    cout << "Chose the operator (+, -, *, /): ";
    cin >> operat;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    switch (operat)
    {
    case '+':
        sum(a, b);
        break;
    case '-':
        dif(a, b);
        break;
    case '*':
        mul(a, b);
        break;
    case '/':
        division(a, b);
        break;
    }
    return 0;
}