// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.

#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &coins, int amount)
{
    // base case
    if (amount == 0)
    {
        // to cretae 0 amount we need 0 coins
        return 0;
    }
    // if amount is < 0
    int minCoins = INT_MAX;
    // for each amount we have to traverse the whole array of coins
    for (int i = 0; i < coins.size(); i++)
    {
        int coin = coins[i];
        // if value of coin is more than amount the no need to call recursive function
        // and if the value of coin is less than amount then call recursive function
        if (coin <= amount)
        {
            // logic
            int recursionAns = solve(coins, amount - coin);
            // there is a possibility that the ans from recursion valid mean != INT_MAX or invalid mean == INT_MAX
            if (recursionAns != INT_MAX)
            {
                // valid ans
                int coinAns = 1 + recursionAns;
                // check if it is miniumum
                minCoins = min(minCoins, coinAns);
            }
        }
    }
    return minCoins;
}

int coinChange(vector<int> &coins, int amount)
{
    int ans = solve(coins, amount);
    if (ans == INT_MAX)
    {
        return -1;
    }
    return ans;
}
