#include <iostream>
using namespace std;

void invertedPyramid(int n)
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
            if (row == 0 || row == n - 1 || col == 0 || col == n - row - 1)
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

    invertedPyramid(n);

    return 0;
}