#include <bits/stdc++.h>
using namespace std;

// Function to rotate the matrix
void rotateMatrix(int matrix[10][10], int n) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);  // Transpose
        }
    }

    
    for (int i = 0; i < n; i++) {
        reverse(matrix[i], matrix[i]+n);  // Reverse the current row
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[10][10];

    
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix after 90 degree rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
