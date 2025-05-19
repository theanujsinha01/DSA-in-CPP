#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int left = 0, right = mat[0].size() - 1;
    int top = 0, bottom = mat.size() - 1;
    int count = 0, total = mat.size() * mat[0].size();

    while (count < total) {
        for (int i = left; i <= right && count < total; i++) {
            ans.push_back(mat[top][i]);
            count++;
        }
        top++;

        for (int i = top; i <= bottom && count < total; i++) {
            ans.push_back(mat[i][right]);
            count++;
        }
        right--;

        for (int i = right; i >= left && count < total; i--) {
            ans.push_back(mat[bottom][i]);
            count++;
        }
        bottom--;

        for (int i = bottom; i >= top && count < total; i--) {
            ans.push_back(mat[i][left]);
            count++;
        }
        left++;
    }
    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralOrder(mat);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
// time complexity: O(n*m)
// space complexity: O(1)

//.............................................................................
// Pseudocode for spiralOrder

// Start

// Input: matrix mat with rows and cols

// Initialize left = 0, right = cols-1, top = 0, bottom = rows-1
// Initialize count = 0, total = rows * cols
// Create empty list ans

// While count < total
//   Loop i from left to right while count < total
//     Add mat[top][i] to ans
//     count++
//   top++

//   Loop i from top to bottom while count < total
//     Add mat[i][right] to ans
//     count++
//   right--

//   Loop i from right to left while count < total
//     Add mat[bottom][i] to ans
//     count++
//   bottom--

//   Loop i from bottom to top while count < total
//     Add mat[i][left] to ans
//     count++
//   left++

// Return ans

// End
//.............................................................................
