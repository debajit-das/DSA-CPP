// Find the single number using HASH MAP

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {10, 23, 11, 10, 23, 23};

    //    Frequency table or, unordered map
    unordered_map<int, int> frequency;
    // add frequency to the table
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        frequency[num] = frequency[num] + 1;
    }
    unordered_map<int, int>::iterator it;
    int ans;
    for (it = frequency.begin(); it != frequency.end(); it++)
    {
        int key = it->first;
        int value = it->second;
        if (value == 1)
        {
            ans = key;
            break;
        }
    }
    cout << "The number whivh is present single times in the array is : " << ans;
    return 0;
};