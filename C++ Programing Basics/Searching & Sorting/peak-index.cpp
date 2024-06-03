// 852. Peak Index in a Mountain Array

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
        // int max = INT_MIN;
        // int maxIndex = -1;
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     if (arr[i] > max)
        //     {
        //         max = arr[i];
        //         maxIndex = i;
        //     }
        // }
        // return maxIndex;

        // Another method O(logn) time complexity
        int n = arr.size();
        int e = n - 1;
        int s = 0;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                // the ans is mid or on the left side of mid
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s; // return the index value
    }
};