#include <iostream>
using namespace std;
void fancyPattern2Bottom(int n, int num);

void fancyPattern2Top(int n)
{
    int num = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << num << " ";
                num++;
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
    fancyPattern2Bottom(n, num);
}
void fancyPattern2Bottom(int n, int num)
{
    int k = n;
    int start = num - n;
    int c = start;
    for (int row = 0; row < n; row++)
    {
        int c = start;
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << c << " ";
                c++;
            }
            else
            {
                cout << "* ";
            }
        }
        start = start - (n - row - 1);
        k--;
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    fancyPattern2Top(n);
    // fancyPattern2Bottom(n);

    return 0;
}