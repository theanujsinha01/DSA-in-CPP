#include <iostream>
using namespace std;

// Function to reverse a row
void reverse(int matrix[10][10], int row, int n) {
    int start = 0;
    int end = n - 1; // Keep this the same
    while (start < end) {
        swap(matrix[row][start], matrix[row][end]);
        start++;
        end--;
    }
}

// Function to rotate the matrix
void rotateMatrix(int matrix[10][10], int n) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);  // Transpose
        }
    }

    
    for (int i = 0; i < n; i++) {
        reverse(matrix, i, n);  // Reverse the current row
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

    rotateMatrix(matrix, n);

    cout << "Matrix after 90 degree rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
