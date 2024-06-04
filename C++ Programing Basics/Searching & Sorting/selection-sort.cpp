#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size) // time complexity O(n^2)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i; // let's say that ith element is the minimum
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[100] = {441, 303, 455, 822, 121};
    int size = 5;
    selectionSort(arr, size);
    printArray(arr, size);

    return 0;
}