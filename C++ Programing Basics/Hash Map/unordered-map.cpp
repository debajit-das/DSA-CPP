#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, string> table; // roll-no, name

    // insertion
    table[1] = "Samay";
    table[2] = "Divya";
    table[3] = "Rahul";
    table[4] = "Tanmay";
    table[5] = "Koushik";
    table[6] = "Debajit";

    // creating an iterator
    unordered_map<int, string>::iterator it;

    // iterating in the loop

    for (it = table.begin(); it != table.end(); it++)
    {
        int key = it->first;
        string value = it->second;
        cout << "Key = " << key << " & value = " << value << endl;
    }

    // Using for- each loop

    // for (auto it : table)
    // {
    //     int key = it.first;
    //     string value = it.second;
    //     cout << "Key = " << key << " & value = " << value << endl;
    // }

    // Searching (avg case time complexity = O(1))

    if (table.find(2) != table.end()) // 2 is the key
    {
        // found
        string value = table[2];
        cout << "value of the searched key = " << value << endl;
    }
    else
    {
        // not found
        cout << "Not found!!" << endl;
    }

    // Deletion ---> Delete can be done by the key

    table.erase(2);

    cout << "After deleting 2nd row the table is as follows:" << endl;
    for (it = table.begin(); it != table.end(); it++)
    {
        int key = it->first;
        string value = it->second;
        cout << "Key = " << key << " & value = " << value << endl;
    }

    // Aftre deleting 2nd row finding 2nd row again

    if (table.find(2) != table.end()) // 2 is the key
    {
        // found
        string value = table[2];
        cout << "value of the searched key = " << value << endl;
    }
    else
    {
        // not found
        cout << "Not found!!" << endl;
    }

    return 0;
}