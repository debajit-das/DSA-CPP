#include<iostream>
using namespace std;

int main(){
    // int sum = 0;

    // for ( int i = 0; i <= 10; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << "Sum from 1 to 10 is :" << sum << endl;

    // break- if condition fill code will come out of the loop

    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << i << endl;
    //    if (i == 6)
    //    {
    //     break;
    //    }
        
    // }

    // continue- just skip one line

    for (int i = 0; i <= 10; i++)
    {
        if (i == 6) {
        continue;
       }
       
        cout << i << endl;
    }
    

    return 0;
}