#include <bits/stdc++.h>
using namespace std;

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    int n = min(a, b);
    int gcd = 1; 
    for (int i = 1; i <= n; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; 
        }
    }
    return gcd; 
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
     int num1, num2;
     cin >> num1 >> num2; // Input two numbers
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;

    return 0;
}
// time complexity: O(min(a, b)), where a and b are the two numbers.
// space complexity: O(1), as we are using a constant amount of space for variables.
// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input num1, num2

// Function gcd(a, b):
//     n = minimum of a and b
//     gcd = 1
//     For i = 1 to n:
//         If a % i == 0 AND b % i == 0:
//             gcd = i
//     Return gcd

// Function lcm(a, b):
//     Return (a * b) / gcd(a, b)

// Print "GCD is", gcd(num1, num2)
// Print "LCM is", lcm(num1, num2)

// End
// ----------------------------------------------------------------------------------
