#include <iostream>
using namespace std;

// We can also cout the elements by using the function as void
bool checkThreeSum(int arr[], int n, int target)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    // ans store
                    ans = 1;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int target = 50;
    int n = 4;

    int ans = checkThreeSum(arr, n, target);
    if (ans == 1)
    {
        cout << "Triplet is present in the array";
    }
    else
    {
        cout << "Triplet is not present in the array";
    }

    return 0;
}