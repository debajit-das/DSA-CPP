// Write a Program to Calculate the Average of All the Elements Present in an Array.
#include <iostream>
using namespace std;

int avgArray(int arr[], int n)
{
    // int n;
    int sum = 0;
    int avg;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    cout << "Average of the elements of this array is: " << avg << endl;
}

int main()
{
    int arr[5];
    int n;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the value of first array of index " << i << " : ";
        cin >> arr[i];
    }
    n = sizeof(arr) / sizeof(n);

    avgArray(arr, n);

    return 0;
}