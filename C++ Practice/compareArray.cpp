// Write a Program to Check if Two Arrays Are Equal or Not.

#include <iostream>
using namespace std;

int main()
{
    int arr1[5];
    int arr2[5], flag = 0;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the value of first array of [" << i << "]: ";
        cin >> arr1[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the value of second array of [" << i << "]: ";
        cin >> arr2[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        if (arr1[i] != arr2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "equal";
    }
    else
    {
        cout << "not equal";
    }

    // ---------------------TO BE CONTINUED--------------------------------------

    return 0;
}
