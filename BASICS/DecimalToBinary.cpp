#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0, ans = 0;
    
    while (n > 0) {
        int lastbit = n & 1;
        ans = ans + (lastbit * pow(10, i)); // Using i directly
        n = n >> 1;
        i++;
    }
    
    cout << "Binary equivalent: " << ans << endl;
    return 0;
}

// time complexity: O(log n), where n is the decimal number.
// space complexity: O(1), as we are using a constant amount of space for variables.

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input n  
// Set i = 0  
// Set ans = 0  

// While n > 0:
//     lastbit = n AND 1
//     ans = ans + (lastbit × 10^i)
//     n = n >> 1   // Right shift by 1
//     i = i + 1

// Print ans (binary equivalent)

// End
// ----------------------------------------------------------------------------------