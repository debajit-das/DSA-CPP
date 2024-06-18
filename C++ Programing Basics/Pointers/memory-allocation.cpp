#include <iostream>
using namespace std;

int main()
{
    // Integer -> stack memory
    int a = 5;
    cout << "a : " << a << endl;

    // Integer -> heap memory
    int *p = new int;
    *p = 5;
    cout << "*p : " << *p << endl;
    // deallocating heap memory
    delete p;
    cout << "*p : " << *p << endl;

    // Integer Array -> stack memory
    int arr[3] = {0};
    cout << arr[0] << arr[1] << arr[2] << endl;

    // Integer array -> heap memory
    int *ptr = new int[3];
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl;

    // 2D array -> stack memory
    int brr[2][4] = {
        {2, 3, 4, 5},
        {6, 7, 8, 9}};

    // 2D array -> heap memory
    int **q = new int *[2];
    for (int i = 0; i < 2; i++)
    {
        q[i] = new int[4];
    }

    //  What is memory leak
    return 0;
}