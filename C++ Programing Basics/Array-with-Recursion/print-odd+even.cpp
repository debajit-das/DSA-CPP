// Print all odd numbers
#include <iostream>
using namespace std;

void printOdd(int arr[], int size, int index)
{
    // base acse
    if (index == size)
    {
        return;
    }
    // recursive relation
    if ((arr[index]) & 1) // bitwise to check odd
    {
        cout << arr[index] << " ";
    }
    printOdd(arr, size, index + 1);
}

void printEven(int arr[], int size, int index)
{
    // base acse
    if (index == size)
    {
        return;
    }
    // recursive relation
    if ((arr[index]) % 2 == 0) // bitwise to check odd
    {
        cout << arr[index] << " ";
    }
    printEven(arr, size, index + 1);
}

int main()
{
    int arr[] = {10, 21, 30, 83, 40, 55, 60};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;

    // printOdd(arr, size, index);
    printEven(arr, size, index);
    return 0;
}