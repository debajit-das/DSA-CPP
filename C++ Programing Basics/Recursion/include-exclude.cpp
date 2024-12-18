#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(string str, int n, string output)
{
    // Base case
    if (n == str.length())
    {
        cout << output << endl;
        return;
    }
    // case1
    char ch = str[n];
    // include
    printSubsequences(str, n + 1, output + ch);
    // exclude
    printSubsequences(str, n + 1, output);
}

int main()
{
    string str = "abc";
    string output = " ";
    int index = 0;
    printSubsequences(str, index, output);

    return 0;
}