// Write a C++ program that takes a vector of strings and returns only those strings that contain a number(s). Return an empty vector if none
#include <algorithm> // Including the Algorithm Library for certain functions like find_if
#include <iostream>  // Including the Input/Output Stream Library
#include <vector>    // Including the Vector Library for using vectors

using namespace std; // Using the Standard Namespace

// Function to find strings in the vector that contain at least one digit
std::vector<std::string> test(std::vector<std::string> colors)
{
    std::vector<std::string> result; // Creating a new vector to store strings containing digits

    // Loop through each string in the input vector 'colors'
    for (auto &text : colors)
    {
        auto it = std::find_if(text.begin(), text.end(), [](char c)
                               { return std::isdigit(c); }); // Using find_if to search for a digit in the current string

        if (it != text.end())
        {                           // If a digit is found in the string
            result.push_back(text); // Add the string to the 'result' vector
        }
    }
    return result; // Return the vector containing strings with digits
}

// Main function
int main()
{
    vector<string> colors = {"red", "green23", "1black", "white"}; // Initializing a vector of strings

    cout << "Original Vector elements:\n";
    for (string c : colors)
        cout << c << " "; // Printing the original elements of the vector

    vector<string> result = test(colors); // Calling the test function to find strings containing digits
    cout << "\n\nFind strings that contain a number(s) from the said vector:\n";
    for (string c : result)
        cout << c << " "; // Printing the strings containing digits from the 'result' vector
}
