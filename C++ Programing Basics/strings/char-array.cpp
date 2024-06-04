#include <iostream>
using namespace std;

int getLength(char arr[], int size)
{
    int count = 0;
    int index = 0;
    while (arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}

void replace(char originalChar, char newChar, char arr[], int size)
{
    int index = 0;
    while (index <= size)
    {
        if (arr[index] == originalChar)
        {
            arr[index] = newChar;
        }
        index++;
    }
    // cout << "New array is : " << arr << endl;
}

void convertUppercase(char arr[], int size)
{
    int len = getLength(arr, size);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        // if & only if ch is lowercase then convert
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
            arr[i] = ch;
        }
    }
}

void convertLowercase(char arr[], int size)
{
    int len = getLength(arr, size);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        // if & only if ch is in uppercase then convert
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - 'A' + 'a';
            arr[i] = ch;
        }
    }
}

void reverse(char arr[], int size)
{
    int n = getLength(arr, size);
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

bool palindrome(char arr[], int size)
{
    int n = getLength(arr, size);
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] == arr[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[100];
    cout << "Enter your name: ";
    // It is not applicable for sapce or tab or new line...
    // cin >> arr;
    // We will use getline
    cin.getline(arr, 100);
    int size = 100;
    cout << "your name is :" << arr << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl; // null chaaracter or terminator

    // Finding length of a char array
    int length = getLength(arr, size);
    cout << "Length of the array is : " << length << endl;

    // Replace character
    char originalChar = '@';
    char newChar = ' ';
    replace('@', ' ', arr, size);
    cout << "New array is : " << arr << endl;

    //          Uppercase to lowercasze  or    lowercase to uppercase
    // formula--->> (ch - 'A' + 'a')              (ch - 'a' + 'A')

    convertUppercase(arr, size);
    cout << "UPPERCASE : " << arr << endl;
    convertLowercase(arr, size);
    cout << "LOWERCASE : " << arr << endl;

    // reverse a char array
    reverse(arr, size);
    cout << "Reversed array : " << arr << endl;

    // Palindrome
    int ans = palindrome(arr, size);
    if (ans == 1)
    {
        cout << "The array / string is palindrome.";
    }
    else
    {
        cout << "The array / string is not palindrome.";
    }

    return 0;
}