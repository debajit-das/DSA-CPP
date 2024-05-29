#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        // mid = (start + end) / 2;
        // we should uese the following formula to find mid
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1; // for increasing sorted array
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {12, 16, 20, 25, 46, 70, 147, 152, 170, 240};
    int n = 10;
    int target = 157;

    // We can usew STL to apply BINARY SEARCH in the code as following
    // bool res = binary_search(arr, arr + n, target);  //--> (base-address, ending-address, target)

    //  We can also writh functioin like the following
    bool res = binarySearch(arr, n, target);

    if (res == 1)
    {
        cout << target << " is present in the array!!";
    }
    else
    {
        cout << target << " is not present in the array!!";
    }

    return 0;
}