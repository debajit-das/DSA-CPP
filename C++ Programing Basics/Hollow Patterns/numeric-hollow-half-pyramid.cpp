#include <iostream>
using namespace std;

void numericPattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            // for number
            if (row == n - 1 || col == row || col == 0)
            {
                cout << col + 1 << " ";
            }
            // for spaces
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

    numericPattern(n);

    return 0;
}