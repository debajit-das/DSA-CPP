// find the value of a^b with time complexity O(log b)

#include <iostream>
using namespace std;

// In the below case time complexity is O(b)
// int slowExponent(int a, int b)
// {
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }

// In the below case time complexity is O(log b)
int fastExponent(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b % 2 != 0) // odd
        {
            ans = ans * a;
        }
        a = a * a;
        b = b / 2;
    }
    return ans;
}

int main()
{
    int a = 2;
    int b = 4;
    // int ans = slowExponent(a, b);
    int ans = fastExponent(a, b);
    cout << "FInal ans : " << ans;
    return 0;
}