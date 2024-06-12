#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    // int b = a;
    // int c = &a;   we need pointer type variable to store address
    int *p = &a;
    int *q = p; // copy of a pointer
    cout << a << endl;
    cout << &a << endl;
    // cout << *a << endl;   error throws
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "*p : " << *p << endl; // derefferencing of operator or value at location store in this variable
    cout << "p + 1 : " << p + 1 << endl;
    cout << "*p / 2 : " << *p / 2 << endl;
    cout << "* p + 1 : " << *p + 1 << endl;
    cout << "q : " << q << endl;
    // cout << "Size of ptr = " << sizeof(ptr); // size of evry ptr is 4 or 8 reason poinetr is a address and adress is always a intigar

    // creating null pointer so that the ptr variable does not store any random value
    int *ptr = 0;
    return 0;
}