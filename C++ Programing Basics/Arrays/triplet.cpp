#include <iostream>
using namespace std;
void triplet(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                cout << "(";
                cout << arr[i] << ", " << arr[j] << ", " << arr[k];
                cout << ")" << endl;
            }
        }
    }
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
    cout << "Enter the elements of the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    triplet(arr, n);
    return 0;
}