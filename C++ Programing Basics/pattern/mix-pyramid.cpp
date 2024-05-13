#include <iostream>
using namespace std;

void mixPyramid(int n)
{
    // Part I

    for (int row = 0; row < n; row++)
    {
        // for star (*)
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        //  for spaces
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }

        // for star (*)
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Part II

    for (int row = 0; row < n; row++)
    {
        // for star(*)

        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        //  for space
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {
            cout << " ";
        }

        // for star(*)

        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    mixPyramid(n);

    return 0;
}