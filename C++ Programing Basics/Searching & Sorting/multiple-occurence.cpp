// FOR MULTIPLE OCCURENCR FIND THE INDEX of FIRST OCCURENCE
#include <iostream>
#include <algorithm>
using namespace std;

void findFirstOccurence(int arr[], int n, int target, int &firstOccurenceIndex)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // we have to declear mi inside while loop otherwise we have change its value again
        if (arr[mid] == target)
        {
            // may or may not be the first occurence
            //  so store the index & check wheathr it is first occurence or not
            firstOccurenceIndex = mid;
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1; // for increasing sorted array
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
    }
    if (firstOccurenceIndex == -1)
    {
        cout << "Target value is not present in the array." << endl;
    }
    else
    {
        cout << "First occurence of the target value is present in " << firstOccurenceIndex << " index." << endl;
    }
}

void findLastOccurence(int arr[], int n, int target, int &lastOccurenceIndex)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // we have to declear mi inside while loop otherwise we have change its value again
        if (arr[mid] == target)
        {
            // may or may not be the first occurence
            //  so store the index & check wheathr it is first occurence or not
            lastOccurenceIndex = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1; // for increasing sorted array
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
    }
    if (lastOccurenceIndex == -1)
    {
        cout << "Target value is not present in the array." << endl;
    }
    else
    {
        cout << "Last occurence of the target value is present in " << lastOccurenceIndex << " index." << endl;
    }
}

int main()
{
    int arr[10] = {5, 7, 7, 8, 8, 10, 10, 20, 30, 35};
    int n = 10;
    int target = 8;
    int firstOccurenceIndex = -1; // -1 means target not found
    int lastOccurenceIndex = -1;

    findFirstOccurence(arr, n, target, firstOccurenceIndex);

    findLastOccurence(arr, n, target, lastOccurenceIndex);

    return 0;
}