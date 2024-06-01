// Find the largest & smallest number of the array by linear search.(HW)

// Write a Program to Find the Maximum and Minimum in an Array.

#include <iostream>
#include <climits>
using namespace std;
int largest(int arr[], int maxVal)
{
    for (int i = 0; i < 5; i++)
    {
        if (maxVal < arr[i])
        {
            maxVal = arr[i];
        }
    }
    cout << "The maximum value of this array is : " << maxVal << endl;
}

int smallest(int arr[], int minVal)
{
    for (int i = 0; i < 5; i++)
    {
        if (minVal > arr[i])
        {
            minVal = arr[i];
        }
    }
    cout << "The minimum value of this array is : " << minVal << endl;
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value of first array of index " << i << " : ";
        cin >> arr[i];
    }
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    largest(arr, maxVal);
    smallest(arr, minVal);

    return 0;
}