#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[], int size)
{
    cout << "Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

bool mycomp(int &a, int &b)
{
    return a > b; // for decreasing order
    // return a < b;  //for increasing order
}

int main()
{
    int arr[100] = {441, 303, 455, 822, 121};
    int size = 5;
    sort(arr, arr + size, mycomp); // STL function
    // The third parameter(optional) comp has to be a function that
    // determines the order in which the elements are going to be sorted.
    // When not specified, the sorting takes place in ascending order
    // considering it to be the std::less<int>() function by default
    printArray(arr, size);

    return 0;
}