// 69. Sqrt(x)

#include <iostream>
using namespace std;

int mySqrt(int x)
{
    int s = 0;
    int e = x;
    int mid = s + (e - s) / 2;
    int ans;

    while (s <= e)
    {
        long long int product = mid * mid;
        if (product == x)
        {
            return mid;
        }
        if (product > x)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid; // store and compute
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    // return ans;
    double sqrtAns = double(ans);

    // Precision
    int precision;
    cout << "Enter the precision : ";
    cin >> precision;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    double ans = mySqrt(x);

    cout << "Square root of " << x << " : " << ans;

    return 0;
}