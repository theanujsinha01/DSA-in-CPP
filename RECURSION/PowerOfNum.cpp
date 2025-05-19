#include <bits/stdc++.h>
using namespace std;
int power(int a, int b) {
    if (b == 0)  // Base case: any number raised to power 0 is 1
        return 1;
    return a * power(a, b - 1);  // Recursive call: multiply 'a' by power of 'a' raised to (b - 1)
}

int main() {
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;
    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}
// time complexity: O(b) because we are making b recursive calls
// space complexity: O(b) because of the recursion stack

//.............................................................................
// Pseudocode for power(a, b) using recursion

// Start

// Function power(a, b):
//   If b == 0:
//     Return 1       // base case: any number ^ 0 = 1
//   Else:
//     Return a * power(a, b - 1)   // recursive call

// In main:
//   Input a (base) and b (exponent)
//   Print power(a, b)

// End
//.............................................................................

