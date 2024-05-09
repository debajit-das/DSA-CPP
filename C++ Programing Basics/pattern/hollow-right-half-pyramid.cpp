#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row: ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == 2 || i == row)
            {
                cout << "* ";
            }
            else
            {
                if (j == 1 || j == i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}