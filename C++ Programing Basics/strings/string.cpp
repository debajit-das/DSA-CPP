#include <iostream>
using namespace std;

int main()
{
    // declare
    // string name = "Debajit";
    // string surname = "Das";
    // cout << name + surname << endl;

    string str;
    cout << "Enter String : ";
    cin >> str;
    //  we can yse getline like char arr
    cout << "String is: " << str << endl;
    str.push_back('D');
    cout << "After push back the string is: " << str << endl;
    str.pop_back();
    cout << "After pop back the string is: " << str << endl;

    return 0;
}
// string functions....