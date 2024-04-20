#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int sum = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    cout << "Sum of 1 to 10 is: " << sum << endl;

    return 0;
}