#include <iostream>
#include <algorithm> //for fill attribute
using namespace std;

void solve(int arr[], int size) // it is always pass by refference
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 10;
        cout << arr[i] << ", ";
    }
}

int main()
{

    // Finding the sum of an element of array

    int arr[5];
    int sum = 0;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the value of [" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the element of the array: " << sum << endl;

    // filling the same element in array
    int drr[4];

    fill(drr, drr + 4, 10); // fill(starting address, ending address, value)
    cout << drr[3];

    // FUNCTIONS WITH ARRAYS

    int brr[5] = {0};
    int size = 5;
    solve(brr, size);
    return 0;
}