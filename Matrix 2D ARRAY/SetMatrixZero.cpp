#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setZero(vector<vector<int>> &m) {
    int r = m.size(), c = m[0].size();
    vector<bool> row(r, false), col(c, false);

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            if (m[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            if (row[i] or col[j])
                m[i][j] = 0;
    }
    return m;
}

int main() {
    vector<vector<int>> m = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    vector<vector<int>> ans = setZero(m);
    cout << "Matrix after setting zeros:\n";
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// time complexity: O(n*m)
// space complexity: O(n+m)

//...............................................................................
// Pseudocode

// Start

// Input: matrix m with r rows and c columns

// Step 1: Create two arrays row[] and col[] of size r and c, all false

// Step 2: Traverse the matrix
// For i = 0 to r-1:
//    For j = 0 to c-1:
//        If m[i][j] == 0:
//            row[i] = true
//            col[j] = true

// Step 3: Update the matrix
// For i = 0 to r-1:
//    For j = 0 to c-1:
//        If row[i] is true or col[j] is true:
//            m[i][j] = 0

// Step 4: Return the updated matrix

// End
//...............................................................................
