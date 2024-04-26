// Write a Program to Find Compound Interest.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int p, n, r;
    float a, i, x;
    cout << "What is your principle ammount: ";
    cin >> p;
    cout << "Waht is the rate of interest: ";
    cin >> r;
    cout << "For how many years do you want calculate the interest: ";
    cin >> n;

    x = r / 100;
    a = p * pow((1 + x), n);
    i = a - p;
    cout << "Your interest amount is: " << i << endl;

    return 0;
}