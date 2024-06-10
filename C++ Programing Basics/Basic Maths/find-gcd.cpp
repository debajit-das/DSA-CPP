// find G.C.D and adter finding G.C.D find the L.C.M
#include <iostream>
using namespace std;

// ----------------------------EUCLID'S ALGORITHM--------------------------------
// This is the optimal way to find G.C.D
int main()
{
    int a, b;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number :";
    cin >> b;
    int ans = 1;
    int mul = a * b;
    int res = 1;
    if (a == 0)
        ans = b;
    if (b == 0)
        ans = a;

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    if (a == 0)
    {
        ans = b;
    }
    else
    {
        ans = a;
    }
    cout << "G.C.D of the two numbers is : " << ans << endl;
    // L.C.M = (a * b) / G.C.D
    res = mul / ans;
    cout << "L.C.M of the two numbers is : " << res;

    return 0;
}