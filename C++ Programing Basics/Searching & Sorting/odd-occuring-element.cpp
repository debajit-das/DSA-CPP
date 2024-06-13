// ODD OCCURING ELEMENT
// (A) All element occurs even number of times except one
// (B) Element repeats itself in pairs
// (C) No pair repeats itself, no number can occur more than two times in a single stretch
// (D) Find the element that occur odd times

// We can do this in O(n) time complexity by XOR method or mapping

// In binary search we can solve in O(log n) time complexity

#include <iostream>
using namespace std;

int oddOccuring(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (n % 2 == 0)
        {
            return -1;
        }
        if (s == e)
        {
            return s;
        }
        if (arr[mid] == arr[mid + 1] && (mid + 1) < n)
        {
            if (mid % 2 == 0)
            {
                s = mid + 2;
            }
            else
            {
                e = mid - 1;
            }
        }
        else if (arr[mid] == arr[mid - 1] && (mid - 1) >= 0)
        {
            if ((mid - 1) % 2 == 0)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 2;
            }
        }
        else
        {
            return mid;
        }
    }
    return mid;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 9, 9, 5, 5, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    // find odd occuring element
    int ans = oddOccuring(arr, n);

    if (ans == -1)
    {
        cout << "There is no odd occuring element.";
    }
    else
    {
        cout << "The odd occuring element is " << arr[ans] << " at index " << ans;
    }

    return 0;
}