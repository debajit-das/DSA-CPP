#include<iostream>
using namespace std;

int main(){
    // if-else condition
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age > 18)
    {
        cout << "You can Vote!!" << endl;
    }
    else{
        cout << "You can not Vote!!" << endl;
    }

    // // if-else if block
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks > 90)
    {
        cout << "Your grade is: A+" << endl;
    }
    else if (marks > 80)
    {
        cout << "Your grade is: A" << endl;
    }
    else if (marks > 70)
    {
        cout << "Your grade is: B+" << endl;
    }
    else if (marks > 60)
    {
        cout << "Your grade is: B" << endl;
    }
    else if (marks > 50)
    {
        cout << "Your grade is: C+" << endl;
    }
    else if (marks > 40)
    {
        cout << "Your grade is: C" << endl;
    }
    else if (marks > 30)
    {
        cout << "Your grade is: D" << endl;
    }
    else
    {
        cout << "You Failed" << endl;
    }

    // Nested if
    float height;
    float weight;
    cout << "Enter your height (in ft.): ";
    cin >> height;
    cout << "Enter your weight (in Kg.): ";
    cin >> weight;

    if (height > 5)
    {
        if (weight > 70)
        {
            cout << "You got a good BMI" << endl;
        }
        else{
            cout << "Tujhse na ho payega" << endl;
        }
    }
    else{
            cout << "Complan kha le!!" << endl;
        }
    

    return 0;
}