// Finding an element in 2D array by linear search
#include <iostream>
using namespace std;
bool searchArray(int arr[][4], int row, int col, int target) // we have provide the column size in the parameter of the function of 2D array
{
    for (int row_index = 0; row_index < row; row_index++)
    {
        for (int col_index = 0; col_index < col; col_index++)
        {
            if (arr[row_index][col_index] == target)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int arr[4][4] = {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34},
        {41, 42, 43, 44}};
    int row = 4;
    int col = 4;
    int target = 13;

    bool result = searchArray(arr, row, col, target);
    if (result == 0)
    {
        cout << "The element is present in the array.";
    }
    else
    {
        cout << "The element is not present in the array.";
    }

    return 0;
}