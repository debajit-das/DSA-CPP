#include <iostream>
using namespace std;

//  sum functionint
int sum(int a, int b)
{
    return a + b;
}

// count 1 to 100
void count()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
    }
}

// Simple interest
int si(int p, int t, int r)
{
    int interest = p * t * r / 100;
    return interest;
}

// Prime Numbers
void prime()
{
    for (int j = 1; j <= 100; j++)
    {
        for (int k = 1; k < j / 2; k++)
        {
            if (j % k == 0)
            {
                cout << j << "";
            }
        }
    }
}

int main()
{
    //  sum function
    int ans = sum(5, 8);
    cout << ans << endl;

    // count 1 to 100
    count();

    // Simple interest
    int resultInterest = si(15000, 2, 5);
    cout << resultInterest << endl;

    // Prime Numbers
    void prime();

    //  all the above function uses pass by value
    //  pass by value makes a copy of the argument and then apply changes into it.....................
    //  pass by refference apply all the changes in the original argument.............................
    // creating a refference variable
    int age = 22;
    int &deba = age;
    cout << age << endl;
    cout << deba;
    // here both the variable are present in same address.
    // Now changes in any variable will reflect the change in the both variable

    return 0;
}