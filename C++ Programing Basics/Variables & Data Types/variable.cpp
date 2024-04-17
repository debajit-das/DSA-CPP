// Variables and data types
#include<iostream>
using namespace std;

int main(){
    // variable declare...
    // int age = 22;
    // cout << "My age is: " << age << endl;
    // // Manipulaton or updation
    // age = 30;
    // cout << age << endl;

    // PREMETIVE DATA TYPES
    // int
    int marks = 355;
    // float
    float percentage = 83.33;
    // char
    char grade = 'p'; //char data type must be in single quote
    // double
    double weight = 62.99878;
    // boolean
    bool isMale = true; // true = 1 & false = 0... we can write 1 or 0 in acse of true and flase

    cout << marks <<endl;
    cout << percentage <<endl;
    cout << grade <<endl;
    cout << weight <<endl;
    cout << isMale <<endl;
    cout << "Size of int : " << sizeof(marks) <<endl;
    cout << "Size of float : " << sizeof(percentage) <<endl;
    cout << "Size of char : " << sizeof(grade) <<endl;
    cout << "Size of double : " << sizeof(weight) <<endl;
    cout << "Size of boolean : " << sizeof(isMale) <<endl;

    return 0;
}