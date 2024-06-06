// Find total no of palindromic substring  (important algorithm)

#include <iostream>
using namespace std;

int expandCenter(string str, int i, int j)
{
    int n = str.length();
    int count = 0;
    while (i >= 0 && j <= n && str[i] == str[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

void palindromicSubString(string str, int n)
{
    int totalCount = 0;
    for (int center = 0; center < n; center++)
    {
        // odd substring
        int i = center;
        int j = center;
        int oddPalSubStringCount = expandCenter(str, i, j);
        // even substring
        i = center;
        j = center + 1;
        int evenPalSubString = expandCenter(str, i, j);
        totalCount = totalCount + oddPalSubStringCount + evenPalSubString;
    }
    cout << "No of total palindromic substrings are : " << totalCount;
}

int main()
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    int n = str.length();
    palindromicSubString(str, n);

    return 0;
}