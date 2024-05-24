// TWO SUM - any pair whose sum is same as thy target value ?
// create pair of two elements opf the elem,ents of an array

#include <iostream>
using namespace std;
// void twoSum(int arr[], int target, int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
// cout << "The pair is/are : (";
// cout << arr[i] << ", " << arr[j];
// cout << ")" << endl;
//             }
//             else
//             {
//                 count = 1;
//             }
//         }
//     }
//     if (count == 1)
//     {
//         cout << "There is no such pair.";
//     }
// }
pair<int, int> twoSum(int arr[], int target, int n)
{
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans; // if any paior ios not there then return (-1, -1)
}
int main()
{
    int n;
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size (must be positive)." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int, int> ans = twoSum(arr, target, n);
    if (ans.first == -1 & ans.second == -1)
    {
        cout << "There is no such pair!!!";
    }
    else
    {
        cout << "The pair is/are : (";
        cout << ans.first << ", " << ans.second;
        cout << ")" << endl;
    }

    return 0;
}