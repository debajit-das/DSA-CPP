// Vowel or Consonant: Create a program that prompts the user for a character and determines if it's a vowel (a, e, i, o, u) or a consonant using a switch statement

#include <iostream>
#include <ctype.h> // For tolower() function

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Convert character to lowercase for case-insensitive check
    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is a vowel." << endl;
        break;
    default:
        if (isalpha(ch))
        {
            cout << ch << " is a consonant." << endl;
        }
        else
        {
            cout << ch << " is not an alphabet." << endl;
        }
    }

    return 0;
}
