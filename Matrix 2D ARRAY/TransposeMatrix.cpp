#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    return mat;
}

int main() {

    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> ans = transpose(mat);
    cout << "Matrix after transposing:\n";
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// time complexity: O(n^2)
// space complexity: O(1)

//.............................................................................
// Pseudocode for transpose matrix

// Start

// Input: square matrix mat of size n x n

// Loop i from 0 to n-1
//   Loop j from i to n-1
//     Swap mat[i][j] and mat[j][i]

// Return mat

// End
//.............................................................................
