#include <iostream>  // Include only the required header
using namespace std;

void printDiagonals(int matrix[3][3], int n) {
    cout << "Primary Diagonal: ";
    // Print primary diagonal (i == j)
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";  // Elements where row == col
    }
    cout << endl;

    cout << "Secondary Diagonal: ";
    // Print secondary diagonal (i + j == n - 1)
    for (int i = 0; i < n; i++) {
        cout << matrix[i][n - i - 1] << " ";  // Elements where row + col == n - 1
    }
    cout << endl;
}

int main() {
    // Example 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printDiagonals(matrix, 3);  // Pass the matrix and its size

    return 0;
}
