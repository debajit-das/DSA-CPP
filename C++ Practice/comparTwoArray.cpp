// C++ program to find given two array are equal or not
#include <iostream>
using namespace std;

// Returns true if arr1[0..n-1] and arr2[0..m-1]
// contain same elements.
bool areEqual(int arr1[], int arr2[], int n, int m)
{
    // If lengths of array are not equal means array are not equal
    if (n != m)
        return false;

    // Sort both arrays
    // sort(arr1, arr1 + N);
    // sort(arr2, arr2 + M);

    // Linearly compare elements
    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i])
            return false;

    // If all elements were same.
    return true;
}

int main()
{
    int arr1[] = {3, 5, 2, 5, 2, 4};
    int arr2[] = {3, 5, 2, 5, 2, 4};

    // check the no of element present in an array

    int n = sizeof(arr1) / sizeof(n);
    int m = sizeof(arr2) / sizeof(m);

    // Function call
    if (areEqual(arr1, arr2, n, m))
        cout << "These tow arrays are same!!";
    else
        cout << "These two arrays are different!!";
    return 0;
}
