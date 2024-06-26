// Check wheather an array is sorted or not
#include <iostream>
using namespace std;

bool checkSort(int arr[], int size, int index)
{
    // Base case
    if (index == size - 1)
    {
        return 1; // true
    }
    bool currAns = false;
    bool recursionAns = false;

    // solve 1 case
    if (arr[index + 1] > arr[index])
        currAns = true;

    recursionAns = checkSort(arr, size, index + 1);

    // if (currAns == true || recursionAns == true)
    //     return 0;
    // else
    //     return 1;
    return currAns && recursionAns;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;

    int res = checkSort(arr, size, index);
    if (res == 1)
        cout << "The array is sorted";
    else
        cout << "The array is not sorted";

    return 0;
}