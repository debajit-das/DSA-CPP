#include <iostream>
using namespace std;

void pattern(int n)
{

    for (int row = 0; row < n; row++)
    {
        char ch = 'A' - 1;
        for (int col = 0; col < row + 1; col++)
        {
            ch++;
            cout << ch << " ";
        }
        ch--;
        while (ch >= 'A')
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    pattern(n);

    return 0;
}