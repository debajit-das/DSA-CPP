// 2D array using vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(4, vector<int>(3, 15));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int i = 0; i < colSize; i++)
        {
            cout << arr[i][i] << " ";
        }
        cout << endl;
    }

    return 0;
}