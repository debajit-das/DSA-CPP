#include <iostream>
using namespace std;

void fancyPattern1(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (n + 2) - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int col = 0; col < (n + 2) - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    fancyPattern1(n);

    return 0;
}