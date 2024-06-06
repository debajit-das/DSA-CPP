#include <iostream>
using namespace std;

void removeDuplicates(string str)
{
    string ans = "";
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        char currCharacter = str[i];
        if (ans.empty())
        {
            ans.push_back(currCharacter);
        }
        else if (currCharacter == ans.back())
        {
            ans.pop_back();
        }
        else if (currCharacter != ans.back())
        {
            ans.push_back(currCharacter);
        }
    }
    cout << ans;
}

int main()
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    removeDuplicates(str);

    return 0;
}