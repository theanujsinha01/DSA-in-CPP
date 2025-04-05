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
// // time complexity: O(n*m)
// // space complexity: O(1)