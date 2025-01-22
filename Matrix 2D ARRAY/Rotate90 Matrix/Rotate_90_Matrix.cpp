#include <bits/stdc++.h>
using namespace std;

// Function to rotate the matrix
void rotateMatrix(vector<vector<int>>& matrix, int n) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);  // Transpose
        }
    }

    Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());  // Reverse the current row
    }
    //reverse(matrix.begin(), matrix.end()); // colunm wise reverse

}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    // Use vector of vectors for the matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Call the rotateMatrix function
    rotateMatrix(matrix, n);

    // Output rotated matrix
    cout << "Matrix after 90 degree rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
