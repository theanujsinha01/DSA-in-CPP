#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{   
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n = 5; // Input number
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}

// time complexity: O(n), where n is the input number.
// space complexity: O(1), as we are using a constant amount of space for variables.
// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Set n = 5
// Call factorial(n)

// Function factorial(n):
//     Set ans = 1
//     For i = 1 to n:
//         ans = ans × i
//     Return ans

// Print "Factorial of n is ans"

// End
// ----------------------------------------------------------------------------------