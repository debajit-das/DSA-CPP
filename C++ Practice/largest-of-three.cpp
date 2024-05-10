// Largest of Three Numbers: Create a program that reads three numbers from the user and prints the largest one using conditional statements.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the largest number using chained if-else statements
    int largest = num1;
    if (num2 > largest)
    {
        largest = num2;
    }
    if (num3 > largest)
    {
        largest = num3;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
