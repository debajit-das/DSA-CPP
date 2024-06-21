#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    // recursive call
    int finalAns = n * factorial(n - 1);

    return finalAns;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of " << n << " is : " << ans << endl;

    return 0;
}