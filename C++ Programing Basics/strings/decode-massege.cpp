#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void decodeMessage(string msg, unordered_map<char, char> mapping)
{
    string ans = "";
    int n = msg.length();
    for (int i = 0; i < n; i++)
    {
        char msgCharacter = msg[i];
        char mappedCharacter = mapping[msgCharacter];
        ans.push_back(mappedCharacter);
    }
    cout << ans;
}

void mappingMessage(string &key, string msg)
{
    // step:1 create mapping
    unordered_map<char, char> mapping;
    char space = ' ';
    mapping[space] = space;
    char start = 'a';
    int index = 0;

    while (start <= 'z' && index < key.length())
    {
        char keyCurrCharacter = key[index];
        // do mapping but check if any alphabet is repeating
        if (mapping.find(keyCurrCharacter) != mapping.end())
        {
            // If mapping already present
            // no need to store any mapping
            // just move to next char in key
            index++;
        }
        else
        {
            // mapping is not present
            // create mapping
            mapping[keyCurrCharacter] = start;
            start++;
            index++;
        }
    }

    // step:2 use mapping and decode
    decodeMessage(msg, mapping);
}

int main()
{
    string msg;
    cout << "Enter message : ";
    getline(cin, msg);
    string key = "thequickbrownfoxjumpsoverthelazydog";

    mappingMessage(key, msg);
    // decodeMessage(key, msg, n);

    return 0;
}