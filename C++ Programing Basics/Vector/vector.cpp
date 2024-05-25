// Vector is a type of dynamic array whose size can be changed dynamically
#include <iostream>
#include <vector>
using namespace std;
// void countArray(int arr[], int n)
// {
//     cout << "[ ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << ", ";
//     }
//     cout << "]" << endl;
// }

void printVector(vector<int> v)
{
    int size = v.size();
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << ", ";
    }
    cout << "]" << endl;
}
int main()
{
    // // Static arr (Static memory alloacation)
    // // int arr[5] = {5, 6, 8, 9, 10};

    // // Dynamic memory allocation
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int *arr = new int[n];
    // // Takimg inpput of the element opf the array
    // for (int i = 0; i < n; i++)
    // {
    //     int data;
    //     cin >> data;
    //     arr[i] = data;
    // }
    // countArray(arr, n);

    // But we can not push more than n element,
    // For that we use vector

    // in vector we dont tell the soze of vector
    // just keep inserting, vector will automatically manage the memory allocation

    // VECTOR INITIALISATION
    // method - 1
    vector<int> v;

    // Method - 2
    // vector<int> v2(2, 5);   //Init with 2 sixe with same data of 5
    // printVector(v2);

    // Method - 3
    // vector<int> v3 = {8, 9, 10, 11};
    // printVector(v3);

    // v.push_back(10); // Inserting value in vector
    // v.push_back(42);
    // v.push_back(29);
    // v.push_back(82);
    // v.push_back(24);
    // v.push_back(12);

    // taking vector as input
    int n;
    cout << "Enter the size of thew vector: ";
    cin >> n;
    cout << "Enter the values: " << endl;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    cout << "The elements of the vector are: ";
    printVector(v);

    // v.pop_back(); // Deletinmg value in vector from the end
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();

    // If we want to clear the vector (deleting all the elements from the vector without pop)
    // v.clear();
    // cout << "After clearing all the values from vector: ";
    // printVector(v);

    // After deleting we can again push any element inside the vector
    // v.push_back(24);
    // printVector(v);

    // HOW TO COPY VECTOR
    vector<int> v4(v);
    cout << "The elements of v4 are: ";
    printVector(v4);

    // Printing the first and last element of vector
    cout << "The first element of the vector is: " << v[0] << endl;
    cout << "The last element of the vector is: " << v[v.size() - 1] << endl;
    return 0;
}