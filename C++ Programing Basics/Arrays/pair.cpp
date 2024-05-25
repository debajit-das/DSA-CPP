// create pair of two elements opf the elem,ents of an array

#include <iostream>
using namespace std;
void pairArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << "(";
            cout << arr[i] << ", " << arr[j];
            cout << ")" << " ";
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

    pairArr(arr, n);
    return 0;
}