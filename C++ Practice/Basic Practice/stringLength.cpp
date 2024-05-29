#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Your string is: " << str << endl;
    cout << "String Length = " << str.size();
    return 0;
}