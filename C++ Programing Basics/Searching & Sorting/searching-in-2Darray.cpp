// Finding element in 2D array

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row * col;

    // Same as 1D array
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // find rowindex & colindex from mid
        int rowIndex = mid / col; // Finding row index
        int colIndex = mid % col; // Finding col index
        if (matrix[rowIndex][colIndex] == target)
        {
            return 1;
            break;
        }
        if (matrix[rowIndex][colIndex] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int target = 13;

    int ans = searchMatrix(matrix, target);
    if (ans == 1)
    {
        cout << "Target element is present in the matrix !!";
    }
    else
    {
        cout << "Target element is not present in the matrix !!";
    }
    return 0;
}