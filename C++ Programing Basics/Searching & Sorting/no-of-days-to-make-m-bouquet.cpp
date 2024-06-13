// Minimum Number of Days to Make m Bouquets
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool canWeMakeBouquet(vector<int> &bloomDay, int m, int k, int day)
{
    int c = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        // check wheather ith flower is bloomed or not
        if (bloomDay[i] <= day)
        {
            c++;
        }
        if (c == k)
        {
            // i can make a bouquet
            m--;
            c = 0;
            if (m == 0)
                break;
        }
        // not bloomed case
        if (bloomDay[i] > day)
            c = 0;
    }
    return m == 0; // will return true if i am able to make all the bouquet and false if not
}

int main()
{
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;
    int n = bloomDay.size();
    long long int requirment = (double)m * (double)k;
    if (requirment > n)
        return -1;

    int s = *min_element(bloomDay.begin(), bloomDay.end());
    int e = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = 0;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int day = mid;
        if (canWeMakeBouquet(bloomDay, m, k, day))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    // return ans;
    cout << "Time requird : " << ans << " days.";

    return 0;
}
