#include<bits/stdc++.h>
using namespace std;

int printFibonacci(int n) {
   if (n <= 1) {
       return n;
   }
    return printFibonacci(n - 1) + printFibonacci(n - 2);
}

int main() {
    int n;
    cin >> n; // Input number of terms
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << printFibonacci(i) << " ";
    }
    return 0;
}
// time complexity: O(2^n), where n is the number of terms in the Fibonacci series.
// space complexity: O(n), due to the recursion stack.
// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input n  // number of terms

// Function printFibonacci(n):
//     If n <= 1:
//         Return n
//     Else:
//         Return printFibonacci(n - 1) + printFibonacci(n - 2)

// For i from 0 to n-1:
//     Call printFibonacci(i)
//     Print the result

// End
// ----------------------------------------------------------------------------------