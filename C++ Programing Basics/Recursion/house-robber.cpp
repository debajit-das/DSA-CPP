// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

#include <iostream>
#include <vector>
using namespace std;

int solve(int money[], int n, int i)
{
    // Base case
    if (i >= n)
    {
        return 0;
    }
    // Include
    int includeAns = money[i] + solve(money, n, i + 2);
    // it will return 104
    // exclude
    int excludeAns = 0 + solve(money, n, i + 1);
    // it will return 116
    int finalAns = max(includeAns, excludeAns);
    // final ans will be 116
    return finalAns;
}
int main()
{
    int money[] = {10, 15, 9, 17, 12, 18, 25, 16, 30, 50, 18};
    int size = 11;
    int index = 0;
    int ans = solve(money, size, index);
    // return ans;
    cout << "The robber can rob maximum " << ans << " rupees." << endl;
}
