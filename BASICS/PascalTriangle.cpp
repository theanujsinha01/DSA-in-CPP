#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Pascal's Triangle logic
    for (int i = 1; i <= n; i++) {
        int value = 1; // The first value in every row is 1

        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print values in the row
        for (int j = 1; j <= i; j++) {
            cout << value <<" ";
            value = value * (i - j) / j; // Update value for the next column
        }
        cout << endl;
    }

    return 0;
}
// time complexity: O(n^2), where n is the number of rows in Pascal's Triangle.
// space complexity: O(1), as we are using a constant amount of space for variables.

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input n  // number of rows

// For i = 1 to n:
//     value = 1  // first value in row

//     // Print spaces for alignment
//     For j = 1 to (n - i):
//         Print space

//     // Print values in row
//     For j = 1 to i:
//         Print value
//         value = value * (i - j) / j  // update value for next column

//     Print new line

// End
// ----------------------------------------------------------------------------------

