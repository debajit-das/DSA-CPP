// 69. Sqrt(x)    using search space pattern

#include <iostream>
using namespace std;

int mySqrt(int x)
{
    int s = 0;
    int e = x;
    int mid = s + (e - s) / 2;
    double ans;

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
    return ans;
    // double sqrtAns = double(ans);
}
double precisionSqrt(int x)
{
    double sqrt = mySqrt(x);

    // Precision

    int precision;
    cout << "Enter the precision : ";
    cin >> precision;
    double step = 0.1;

    while (precision--) // run the for the number precision times
    {
        double j = sqrt;
        while (j * j <= x)
        {
            // store & comnpute
            sqrt = j;
            j += step;
        }
        step /= 10;
    }

    return sqrt;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    double ans = precisionSqrt(x);

    cout << "Square root of " << x << " : " << ans;

    return 0;
}

// aply direct Binary serach with precision