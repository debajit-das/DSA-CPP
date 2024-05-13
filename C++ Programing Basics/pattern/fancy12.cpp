#include <iostream>
using namespace std;

void pattern(int n)
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

int main()
{
    int n;
    cout << "Enetr the number of rows: ";
    cin >> n;

    pattern(n);

    return 0;
}