#include <iostream>
using namespace std;
void invertedFullPyramid(int n)
{
    for (int row = 0; row <= n - 1; row++)
    {
        // For spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // For star(*)
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    // int row, i, j, k;
    // cout << "Enter the number of row: ";
    // cin >> row;

    // for (i = 1; i <= row; i++)
    // {

    //     for (int k = 1; k < i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j <= row; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    invertedFullPyramid(n);

    return 0;
}