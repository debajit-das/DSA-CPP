// count no of 0s and 1s in an array using linear search.
#include <iostream>
using namespace std;

void count(int arr[], int n)
{
    int countZero = 0, countOne = 0;

    // Linear search to count 0s and 1s
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else
        {
            countOne++;
        }
    }
    cout << "Number of 0s: " << countZero << endl;
    cout << "Number of 1s: " << countOne << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size (must be positive)." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array (0 or 1):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != 0 && arr[i] != 1)
        {
            cout << "Invalid element. Please enter only 0 or 1." << endl;
            return 1; // Exit on invalid input
        }
    }

    count(arr, n);

    return 0;
}
