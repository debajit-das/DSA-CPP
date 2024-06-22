// find max and min of array
#include <iostream>
#include <climits>
using namespace std;

void findMaxInArray(int arr[], int size, int index, int &maxVal)
{

    // base case
    if (index == size)
    {
        return;
    }
    // recursive relation
    if (arr[index] > maxVal)
    {
        maxVal = arr[index];
    }
    findMaxInArray(arr, size, index + 1, maxVal);
}

void findMinInArray(int arr[], int size, int index, int &minVal)
{

    // base case
    if (index == size)
    {
        return;
    }
    // recursive relation
    if (arr[index] < minVal)
    {
        minVal = arr[index];
    }
    findMinInArray(arr, size, index + 1, minVal);
}

int main()
{
    int arr[] = {10, 20, 30, 80, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    findMaxInArray(arr, size, index, maxVal);
    cout << "Max value of the array is : " << maxVal << endl;
    findMinInArray(arr, size, index, minVal);
    cout << "Min value of the array is : " << minVal << endl;

    return 0;
}