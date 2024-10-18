#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    // Pascal's Triangle logic
    for (int i = 0; i < n; i++) {
        int value = 1; // The first value in every row is 1

        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print values in the row
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1); // Update value for the next column
        }
        cout << endl;
    }

    return 0;
}

