#include <iostream>
using namespace std;

int main()
{
    // Significant use of bitwise operator is to check any number is even or odd

    int n;
    cout << "Enter the number: ";
    cin >> n;
    // & is logical bitwise operator
    if (n & 1 == 1)
    {
        cout << n << " is odd." << endl; // if the last bit is 1 then the number will be odd.
    }
    else
    {
        cout << n << " is even." << endl; // if the last digit is 0 then the number will be even
    }
    //  ~ is logical not operator
    cout << ~(n) << endl;
    //  ^ is logical xor operator
    cout << (7 ^ 8 ^ 7 ^ 12 ^ 7 ^ 8 ^ 12) << endl; // It is mainly used to cancelout the common number
    // << is left shift operator-- it sifts the value by 1 bit
    cout << (6 << 1) << endl; // after shifting the number it will (6 * 2^n)
    //  >> is right shift
    cout << (6 >> 1) << endl; // exactly opposite to left shift

    // Finding the setbits
    // int setBitCount = 0;
    // while (n != 0)
    // {
    //     if ((n & 1) == 1)
    //     {
    //         setBitCount += 1;
    //     }
    //     n = n >> 1;
    // }
    // cout << "Total set bits : " << setBitCount << endl;

    return 0;
}