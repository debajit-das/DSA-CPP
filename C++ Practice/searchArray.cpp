// Write a Program to Search an Element in an Array (Linear Search).

#include <iostream>
using namespace std;

int search(int arr[], int val)
{
    int flag = 0;
    int index;
    for (int i = 0; i <= 4; i++)
    {
        if (val == arr[i])
        {
            index = i;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "Your searched value " << val << " is present in the array at index no " << index << endl;
    }
    else
    {
        cout << "Your sesrched value " << val << " is not present in this array.." << endl;
    }
}

int main()
{
    int arr[5];
    int val;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the value of first array of index " << i << " : ";
        cin >> arr[i];
    }
    cout << "What value do you want search : ";
    cin >> val;

    search(arr, val);
    return 0;
}