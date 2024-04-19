#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum from 1 to 10 is :" << sum << endl;

    return 0;
}