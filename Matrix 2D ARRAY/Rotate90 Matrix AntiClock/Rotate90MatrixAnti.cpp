#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]); 
        }
    }
    //Step 2: Reverse each column
    reverse(matrix.begin(), matrix.end()); // colunm wise reverse
    return matrix;
}

int main() {
    
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
     vector<vector<int>>ans = rotateMatrix(matrix);

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
