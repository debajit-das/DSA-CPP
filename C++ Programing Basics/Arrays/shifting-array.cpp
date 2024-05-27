#include <iostream>
using namespace std;
void rotateArray(int arr[], int size, int shift)
{
    int finalShift = shift % size;
    // int temp[shift] =
    if (finalShift == 0)
    {
        // No need to do anything
        return;
    }
    // creat a tem array
    int temp[10000];
    int index = 0;
    for (int i = size - finalShift; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }

    // shift arra by finalshift
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - finalShift];
    }

    // copy temp element in originalo array
    for (int i = 0; i < finalShift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int shift = 2; // shift by last 2 place

    cout << "Before shifting array: " << endl;
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "]" << endl;

    rotateArray(arr, size, shift);
    cout << "After shifting array: " << endl;
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "]";

    return 0;
}