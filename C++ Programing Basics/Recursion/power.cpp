// Calculate 2^n
#include <iostream>
using namespace std;

int pow(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    // recursive call
    int finalAns = 2 * pow(n - 1);

    return finalAns;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = pow(n);
    cout << "2^" << n << " = " << ans << endl;

    return 0;
}