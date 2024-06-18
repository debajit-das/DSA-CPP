#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;                    // as arr shows the base address that is why it will be the copy of the base address in p
    cout << "arr : " << arr << endl; // print the base address
    cout << "&arr : " << &arr << endl;
    cout << "arr[0] : " << arr[0] << endl;
    cout << "arr[2] : " << arr[2] << endl;
    cout << "&arr[0] : " << &arr[0] << endl; // print the base address
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "*p : " << *p << endl;
    cout << "*arr + 1 : " << *arr + 1 << endl;
    cout << "*(arr + 1) : " << *(arr + 1) << endl;
    cout << "*(arr + 3) : " << *(arr + 3) << endl;
    cout << "size of pointer : " << sizeof(p) << endl;

    // Pointer with char arrays
    char ch[100] = "Debajit";
    char *cp = ch;
    cout << "ch : " << ch << endl;
    cout << "cp : " << cp << endl; // it will print entier string not the base address
    cout << "Base address (&ch) : " << &ch << endl;
    cout << "ch[0] : " << ch[0] << endl;
    cout << "&cp : " << &cp << endl;
    cout << "*cp : " << *cp << endl;
    cout << "*(cp + 3) : " << *(cp + 3) << endl;
    cout << "cp + 2 : " << cp + 2 << endl;

    return 0;
}