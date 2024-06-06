#include <iostream>
using namespace std;

void removeOccurrence(string full, string part)
{
    while (full.find(part) != string::npos)
    {
        // Erase part string from full string
        // Erase function has 2 arguments
        // first - give the starting index of the the part
        // second - specify how many character is to be removed
        full.erase(full.find(part), part.length());
    }
    cout << full;
}

int main()
{
    string full;
    string part;
    cout << "Enter String : ";
    cin >> full;
    cout << "Enter String you want to remove : ";
    cin >> part;
    removeOccurrence(full, part);

    return 0;
}