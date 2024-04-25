#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k;
    cout << "Enter the number of row: ";
    cin >> row;

    for (i = 1; i <= row; i++)
    {

        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= row; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}