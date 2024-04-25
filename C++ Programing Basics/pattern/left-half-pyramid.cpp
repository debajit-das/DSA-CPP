#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k;
    cout << "Enter the number of rows: ";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = i; j < row; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}