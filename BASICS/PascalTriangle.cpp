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

