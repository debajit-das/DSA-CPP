#include <iostream>
using namespace std;

int getlength(char arr[])
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

void concat(char arr[], char brr[])
{
    int arrIndex = getlength(arr);
    int brrIndex = 0;

    while (brr[brrIndex] != '\0')
    {
        arr[arrIndex] = brr[brrIndex];
        arrIndex++;
        brrIndex++;
    }
    arr[arrIndex] = '\0';
    cout << "After concatenation value is : " << arr << endl;
}

int main()
{
    // declare
    // char arr[10] = "Debajit";
    // cout << arr[5] << endl;

    // // printing 7th index
    // cout << arr[7] << endl;
    // int ascii = arr[7]; // 7th index is the null charcter, whose ascii value is 0
    // cout << ascii << endl;

    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << arr << endl;    //----------- it prints the address of the first index
    // char arr[10] = "Debajit";
    // cout << arr << endl;   //--------------- it prints the value of the char array

    // find the length of a char array
    // char arr[10] = "Debajit";
    // cout << "Length of this array is : " << getlength(arr) << endl;

    // concatination of two char arrays
    char arr[50] = "Debajit ";
    char brr[50] = "Das";
    concat(arr, brr);

    return 0;
}