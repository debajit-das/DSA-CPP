// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> piles = {30, 11, 23, 4, 20};
    int h = 6;
    int s = 1;
    int n = piles.size();
    // int e = 30;
    auto it = max_element(piles.begin(), piles.end());
    int e = *it;
    int k = 0;
    int ans = 0;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        k = mid;
        long long int totalHour = 0;
        for (int i = 0; i < n; i++)
        {
            totalHour = totalHour + ceil(piles[i] / (double)mid);
        }
        if (totalHour <= h)
        {
            ans = k;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        cout << "by" << endl;
    }
    // return ans;
    cout << "total time : " << ans;

    return 0;
}