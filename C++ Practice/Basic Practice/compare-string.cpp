#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char string1[100];
    char string2[100];

    cout << "Enter the first string: ";
    cin.getline(string1, sizeof(string1));

    cout << "Enter the second string: ";
    cin.getline(string2, sizeof(string2));

    // Compare the strings using strcmp
    if (strcmp(string1, string2) == 0)
    {
        cout << "The strings are lexicographically identical." << endl;
    }
    else
    {
        cout << "The strings are not lexicographically identical." << endl;
    }

    return 0;
}
