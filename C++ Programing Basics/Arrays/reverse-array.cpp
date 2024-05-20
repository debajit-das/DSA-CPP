// Reverse the elements of an array.(HW)

#include <iostream>
#include <algorithm> // it includes reverse functions
using namespace std;

void reverseArray(int arr[], int n)
{
    int initial = 0;
    int final = n - 1;
    while (initial < final)
    {
        swap(arr[initial], arr[final]);
        initial++;
        final--;
    }
    cout << "After reversing: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " --> " << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(int);
    // cout << n;
    cout << "Before reversing: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " --> " << arr[i] << endl;
    }

    // Method 1 for reversing
    // reverseArray(arr, n);

    // Method 2 for reversing using STL in C++ library
    reverse(arr, arr + n);

    cout << "After reversing: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " --> " << arr[i] << endl;
    }

    return 0;
}
