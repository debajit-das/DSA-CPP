// Write a Program to Find the Maximum and Minimum in an Array.

#include <iostream>
using namespace std;
int max(int arr[], int maxVal)
{
    for (int i = 1; i <= 4; i++)
    {
        if (maxVal < arr[i])
        {
            maxVal = arr[i];
        }
    }
    cout << "The maximum value of this array is : " << maxVal << endl;
}

int min(int arr[], int minVal)
{
    for (int i = 1; i <= 4; i++)
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

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the value of first array of index " << i << " : ";
        cin >> arr[i];
    }
    int maxVal = arr[0];
    int minVal = arr[0];

    max(arr, maxVal);
    min(arr, minVal);

    return 0;
}