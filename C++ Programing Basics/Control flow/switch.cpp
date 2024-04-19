#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (grade == 'A')
    {
            cout << "Your marks is from 90 to 100" << endl;
    }
    else if (grade == 'B')
    {
        cout << "Your marks is from 80 to 90" << endl;
    }
    else if (grade == 'C')
    {
        cout << "Your marks is from 70 to 80" << endl;
    }
    else if (grade == 'D')
    {
        cout << "Your marks is from 60 to 70" << endl;
    }
    else if (grade == 'E')
    {
        cout << "Your marks is from 50 to 60" << endl;
    }
    else {
        cout << "You failed!!" << endl;
    }

// Switch Statement
    switch (grade)
    {
    case 'A':cout << "Your marks is from 90 to 100" << endl;
    break;
    case 'B':cout << "Your marks is from 80 to 90" << endl;
    break;
    case 'C':cout << "Your marks is from 70 to 80" << endl;
    break;
    case 'D':cout << "Your marks is from 60 to 70" << endl;
    break;
    case 'E':cout << "Your marks is from 50 to 60" << endl;
    break;
    default:cout << "You failed!!" << endl;
    
    }

    return 0;
}