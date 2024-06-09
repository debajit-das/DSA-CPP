// find any string and replace with another

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printVector(vector<string> &ans)
{
    int size = ans.size();
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << ", ";
    }
    cout << "]" << endl;
}

void normalise(string &str)
{
    // craete mapping
    char start = 'a';
    unordered_map<char, char> mapping;

    for (int i = 0; i < str.length(); i++)
    {
        char strCharacter = str[i];
        if (mapping.find(strCharacter) == mapping.end())
        {
            mapping[strCharacter] = start;
            start++;
        }
    }
    // update string & normalise;
    for (int i = 0; i < str.length(); i++)
    {
        char mappedCharacter = mapping[str[i]];
        str[i] = mappedCharacter;
    }
}

int main()
{
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    vector<string> ans;
    // normalize by mapping the words as well as pattern
    normalise(pattern);

    // traverse on words ans normalise them and compare with pattern
    for (int i = 0; i < words.size(); i++)
    {
        string currWord = words[i];
        string currWordCopy = currWord;
        normalise(currWordCopy);
        if (currWordCopy == pattern)
        {
            ans.push_back(currWord);
        }
    }
    printVector(ans);

    return 0;
}