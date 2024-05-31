#include <iostream>
#include <vector>
// #include <unordered_map>

using namespace std;

vector<int> findCompliment(vector<int> binary)
{
    int n = binary.size();
    vector<int> twosComp(n + 1, 0);

    // step - 1  --> take 1's compliment
    int i; // binary index counter
    int j; // twosComp index counter

    for (i = n - 1, j = n; i >= 0, j >= 1; i--, j--)
    {
        if (binary[i] == 1)
        {
            twosComp[j] = 0;
        }
        else
        {
            twosComp[j] = 1;
        }
    }

    // step - 2 --> add 1 at the last index
    int c = 1;
    for (j = n; j >= 0; j--)
    {
        int sum = twosComp[j] + c;
        twosComp[j] = sum % 2;
        c = sum / 2;
    }
    if (c)
    {
        twosComp[0] = c;
    }

    return twosComp;
}

int main()
{
    vector<int> binary = {1, 1, 0, 0, 1, 0, 1, 0, 1};

    vector<int> twosComp = findCompliment(binary);
    int size = twosComp.size();

    cout << "Result: {";
    for (int i = 0; i < size; i++)
    {
        cout << twosComp[i] << " ";
    }
    cout << "}";

    return 0;
}