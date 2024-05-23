#include <iostream>
using namespace std;

void palPyramid(int n)
{
    int num;
    for (int row = 0; row < n; row++)
    {
        // FOR SPACE
        for (int col = 0; col < n - (row + 1); col++)
        {
            cout << "  ";
        }
        // FOR LEFT-HALF PYRAMID
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        // FOR RIGHT_HALF PYRAMID
        for (int col = 0, num = row; col < row, num > 0; col++, num--)
        {
            cout << num << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    palPyramid(n);

    return 0;
}