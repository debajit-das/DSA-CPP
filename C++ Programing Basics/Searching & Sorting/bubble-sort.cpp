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

void bubbleSort(int arr[], int size) // time complexity O(n^2)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            // if (arr[j] < arr[j + 1])   //For decreasing order
            // {
            //     swap(arr[j], arr[j + 1]);
            // }

            if (arr[j] > arr[j + 1]) // For increasing order
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[100] = {5, 4, 3, 2, 1};
    int size = 5;
    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}