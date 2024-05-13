#include <iostream>
using namespace std;

void hollowPyramid(int n)
{
    for (int row = 0; row <= n - 1; row++)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        //    star(*)

        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == n - 1 || col == 0 || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    hollowPyramid(n);

    return 0;
}