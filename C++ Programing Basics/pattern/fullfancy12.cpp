#include <iostream>
using namespace std;

void halfFancy12(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            // for number
            if (col % 2 == 0)
            {
                cout << row + 1 << " ";
            }
            // for star
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

invertedFancy12(int n)
{
    n = n - 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {
            // for number
            if (col % 2 == 0)
            {
                cout << n - row << " ";
            }
            // for star
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enetr the number of rows: ";
    cin >> n;

    halfFancy12(n);
    invertedFancy12(n);

    return 0;
}