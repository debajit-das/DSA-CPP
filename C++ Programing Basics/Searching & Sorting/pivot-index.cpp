// 33. Search the pivot iondex in Rotated sorted array

#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int pivot = -1;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        if (arr[mid] > arr[s])
        {
            pivot = mid;
            s = mid + 1;
            return pivot;
        }
        if (arr[mid] < arr[s])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return pivot;
}

int binarySearch(int s, int e, int target, vector<int> &arr)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2, 3};
    int target = 3;
    int n = arr.size();
    int pivotIndex = findPivotIndex(arr);
    cout << "Pivot Index: " << pivotIndex << endl;

    // line-->1 0-pivotIndex
    if (target >= arr[0] && target <= arr[pivotIndex])
    {
        // apply BS
        int ans = binarySearch(0, pivotIndex, target, arr);
        // return ans;
        cout << "Target element " << target << " is present on index: " << ans;
    }
    // line-->2  (pivotIndex + 1) - (n -1)
    else
    {
        // apply BS
        int ans = binarySearch(pivotIndex + 1, n - 1, target, arr);
        // return ans;
        cout << "Target element " << target << " is present on index: " << ans;
    }
    return 0;
}
