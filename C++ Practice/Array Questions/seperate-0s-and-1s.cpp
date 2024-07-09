// Write a C++ program to separate 0s and 1s from a given array of values 0 and 1.
#include <iostream>  // Header file for input/output stream
using namespace std; // Using the standard namespace

// Function to segregate 0s and 1s in the array
void segregateEvenOdd(int nums[], int n)
{
    int ctr = 0; // Initialize a counter for the number of zeroes

    // Count the number of zeroes in the array
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            ctr++;
    }

    // Place the counted zeroes at the beginning of the array
    for (int i = 0; i < ctr; i++)
        nums[i] = 0;

    // Place the remaining ones after the zeroes in the array
    for (int i = ctr; i < n; i++)
        nums[i] = 1;
}

// Main function
int main()
{
    int nums[] = {0, 1, 0, 0, 1, 1, 1, 0, 1, 0}; // Declaration and initialization of an integer array
    int n = sizeof(nums) / sizeof(nums[0]);      // Calculate the number of elements in the array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " "; // Output each element of the original array
    segregateEvenOdd(nums, n);  // Rearrange the array by segregating 0s and 1s
    cout << endl
         << "Array after segregation: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " "; // Output each element of the modified array
    return 0;
}
