#include <iostream>
using namespace std;

void invertedNumeric(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = row + 1; col < n + 1; col++)
        {
            // for number
            if (row == 0 || col == row + 1 || col == n)
            {
                cout << col << " ";
            }
            // for space
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

    invertedNumeric(n);
    return 0;
}