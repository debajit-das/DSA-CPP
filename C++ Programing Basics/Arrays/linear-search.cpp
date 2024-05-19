#include <iostream>
using namespace std;
bool findTarget(int arr[], int size, int target)
{
    // traversing tyhe array
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        if (currentElement == target)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    bool result = findTarget(arr, size, target);
    if (result == 0)
    {
        cout << target << " is present in the array" << endl;
    }
    else
    {
        cout << target << " is not present in the array" << endl;
    }

    return 0;
}