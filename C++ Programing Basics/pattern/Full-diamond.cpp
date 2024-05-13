#include <iostream>
using namespace std;

//  Full pyramid

void fullPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// Inverted full pyramid

void invertedFullPyramid(int n)
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
            cout << "* ";
        }
        cout << endl;
    }
}

void diamond(int n)
{
    fullPyramid(n);
    invertedFullPyramid(n);
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    diamond(n);

    return 0;
}