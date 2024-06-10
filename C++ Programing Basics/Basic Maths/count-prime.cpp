// Find the number of prime numbers in the range of 0 to n.
#include <iostream>
#include <cmath>
using namespace std;

// Sqrt approach
// In the below case time coplexity is more

// bool isPrime(int i)
// {
//     int sqrtN = sqrt(i);
//     if (i <= 1)
//     {
//         return false;
//     }
//     for (int j = 2; j <= sqrtN; j++)
//     {
//         if (i % j == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     int count = 0;

//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime(i) == true)
//         {
//             count++;
//         }
//     }
//     cout << "Number of prime number in the range of '0' to '" << n << "' is : " << count;
//     return 0;
// }

// SIEVE OF ERATOSTHENES
// time complexity = O(n * log(log n))

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count = 0;
    if (n == 0)
        return 0;

    vector<bool> prime(n, true); // all are prime marked already
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    // Optimisation : 2  in the outr loop
    // for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            count++;

            // int j = 2 * i;
            // Optimisation: 1 in the inner loop
            int j = i * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    cout << "Number of prime number in the range of '0' to '" << n << "' is : " << count;

    return 0;
}