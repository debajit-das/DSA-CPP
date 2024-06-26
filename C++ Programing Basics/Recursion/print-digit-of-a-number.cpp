#include <iostream>
using namespace std;

void printDigit(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    // recursivecall
    printDigit(n / 10);

    int digit = n % 10;
    cout << digit << " ";
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int digit;

    printDigit(n);

    return 0;
}