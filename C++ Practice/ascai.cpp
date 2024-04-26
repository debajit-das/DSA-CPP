//  Write a Program to Print the ASCII Value of a Character.

#include <iostream>
using namespace std;

int main()
{
    char charInput;
    cout << "Enter your input: ";
    cin >> charInput;
    int asciiOutput = charInput;

    cout << "ASCII value of your input is :" << asciiOutput;

    return 0;
}