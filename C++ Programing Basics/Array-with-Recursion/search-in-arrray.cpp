#include <iostream>
using namespace std;

bool searchArray(int arr[], int size, int target, int index)
{
    // base case
    if (index == size)
    {
        return 0;
    }
    // recursive relation
    if (arr[index] == target)
    {
        return 1;
    }
    searchArray(arr, size, target, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    int target = 50;
    int index = 0;

    int result = searchArray(arr, size, target, index);
    if (result == 1)
    {
        cout << target << " is present in the array.";
    }
    else
    {
        cout << target << " is not present in the array.";
    }

    return 0;
}