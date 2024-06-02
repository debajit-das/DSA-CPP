// 852. Peak Index in a Mountain Array

// An array arr is a mountain if the following properties hold:

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Time complexity -----> O(n). Linear search
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int max = INT_MIN;
        int maxIndex = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};