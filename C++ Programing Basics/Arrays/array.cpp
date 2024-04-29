#include <iostream>
using namespace std;

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

    return 0;
}