#include <iostream>
using namespace std;

bool checkPalindrome(string str, int start, int end)
{
    while (start <= end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

bool palindrome(string str, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (str[start] == str[end])
        {
            start++;
            end--;
        }
        else
        {
            // delete starting index and then check palindrome
            bool ansOne = checkPalindrome(str, start + 1, end);
            // delete ending index and check palindrome
            bool ansTwo = checkPalindrome(str, start, end - 1);

            bool finalAns = ansOne || ansTwo;
            return finalAns;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    int n = str.length();
    int res = palindrome(str, n);
    cout << res;

    return 0;
}