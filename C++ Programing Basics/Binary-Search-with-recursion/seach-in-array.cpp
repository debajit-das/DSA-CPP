#include <iostream>
using namespace std;

// ------------------------Using Recursion----------------------------
int binarySearchRecursion(int arr[], int size, int s, int e, int target)
{
    // Base case
    if (s > e)
    {
        return -1;
    }
    // recursive function
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    // recursive call
    if (target > arr[mid])
    {
        s = mid + 1;
        return binarySearchRecursion(arr, size, s, e, target);
    }
    else
    {
        e = mid - 1;
        return binarySearchRecursion(arr, size, s, e, target);
    }
}

// ---------------------Using Binary Search---------------------
// int binarySearch(int arr[], int size, int target)
// {
//     int s = 0;
//     int e = size - 1;
//     int index = -1;

//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         if (target > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return index;
// }

int main()
{
    int arr[] = {10, 21, 30, 40, 55, 60, 83};
    int size = sizeof(arr) / sizeof(int);
    int target = 55;
    int s = 0;
    int e = size - 1;

    // int res = binarySearch(arr, size, target);
    int res = binarySearchRecursion(arr, size, s, e, target);

    if (res == -1)
    {
        cout << target << " is not present in the array" << endl;
    }
    else
    {
        cout << target << " is present in index : " << res << endl;
    }

    return 0;
}