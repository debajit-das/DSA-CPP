// Find the missimg number
#include <iostream>
#include <algorithm>
using namespace std;

void findMissingNumber(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid + 1] - arr[mid] != 1)
        {
            cout << "The missing item is: " << arr[mid] + 1;
            break;
        }
        else if (arr[mid] - arr[mid - 1] != 1)
        {
            cout << "The missing item is: " << arr[mid] - 1;
            break;
        }
        else if (arr[mid] - mid == 0)
        {
            start = mid + 1;
        }
        else if (arr[mid] - mid < 0)
        {
            end = mid - 1;
        }
    }
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 9, 10};
    int n = 10;

    findMissingNumber(arr, n);

    return 0;
}