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

void insertionSort(int arr[], int size) // time complexity O(n^2)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        // shifting
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[100] = {5, 4, 3, 2, 1};
    int size = 5;
    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}