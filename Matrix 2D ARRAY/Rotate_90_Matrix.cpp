#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);  // Transpose
        }
    }
    //Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());  
    }
    return matrix;
}

int main() {
  
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>>ans =  rotateMatrix(matrix);
    cout << "Matrix after 90 degree rotation:\n";
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// time complexity: O(n^2)
// space complexity: O(1)

//...............................................................................
// pseudo code

// Start

// Input: square matrix of size n x n

// Step 1: Transpose the matrix
// For i = 0 to n - 1:
//     For j = i to n - 1:
//         Swap matrix[i][j] and matrix[j][i]

// Step 2: Reverse each row
// For i = 0 to n - 1:
//     Reverse matrix[i]

// Step 3: Return matrix

// End
//...............................................................................
