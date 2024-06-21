#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // recursive call
    int nthTerm = fibonacci(n - 1) + fibonacci(n - 2);

    return nthTerm;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = fibonacci(n);
    cout << ans;

    return 0;
}