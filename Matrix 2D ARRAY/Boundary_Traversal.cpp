#include <bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>>& mat) {
    vector<int> ans;
    int row = mat.size();
    int col = mat[0].size();
    

    if (row == 0 || col == 0) return ans;
            

    for (int i = 0; i <= col - 1; i++){
        ans.push_back(mat[0][i]);
    }
            
    for (int i = 1; i <= row - 2; i++){
        ans.push_back(mat[i][col-1]);
    }
    
    if (row > 1) {
        for (int i = row - 1; i >= 0; i--) {
            ans.push_back(mat[row - 1][i]);
        }
    }
       
    if (col > 1) {
        for (int i = row - 2; i >=1; i--){
            ans.push_back(mat[i][0]);
        }
    }
     
    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> result = boundaryTraversal(mat);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
// time complexity: O(n)
// space complexity: O(1)

//...............................................................................
// pseudo code

// Start

// Input: matrix mat with rows and cols

// Step 1: Initialize empty list ans

// Step 2: Get row = number of rows in mat
//         Get col = number of columns in mat

// Step 3: If row == 0 or col == 0:
//             return ans

// Step 4: Traverse top row from left to right
// For i = 0 to col - 1:
//     Add mat[0][i] to ans

// Step 5: Traverse right column from 2nd row to second last row
// For i = 1 to row - 2:
//     Add mat[i][col - 1] to ans

// Step 6: Traverse bottom row from right to left (if row > 1)
// If row > 1:
//     For i = col - 1 down to 0:
//         Add mat[row - 1][i] to ans

// Step 7: Traverse left column from second last row to 2nd row (if col > 1)
// If col > 1:
//     For i = row - 2 down to 1:
//         Add mat[i][0] to ans

// Step 8: Return ans

// End
//...............................................................................
