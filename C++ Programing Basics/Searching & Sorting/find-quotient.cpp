// Given two integers one is a dividend and the other is the divisor, we nned to
// find the quotient when the dividend is devided by the divisor without using any
// " / " and " % " operators

// input: dividend = 10, divisor = 2
// output: 5

// input: dividend = 10, divisor = 3
// output: 3
// explanation: 10/3 = 3.33333.. which is truncated to 3

#include <iostream>
using namespace std;

int findQuotient(int dividend, int divisor)
{
    int s = 0;
    int e = dividend;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) >> 1);
        if (divisor * mid <= dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int dividend, divisor;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    int ans = findQuotient(abs(dividend), abs(divisor));
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        ans = 0 - ans;
    }
    cout << "Quotient is : " << ans;

    return 0;
}