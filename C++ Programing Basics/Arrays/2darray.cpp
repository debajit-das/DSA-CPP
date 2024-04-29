#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34},
        {41, 42, 43, 44}};
    int row = 4;
    int col = 4;

    // Accessing the array
    // arr[row index][column index]
    cout << arr[1][3] << endl;

    // Printing array

    for (int row_index = 0; row_index <= row - 1; row_index++)
    {
        for (int col_index = 0; col_index <= col - 1; col_index++)
        {
            cout << arr[row_index][col_index] << " ";
        }
        cout << endl;
    }

    return 0;
}