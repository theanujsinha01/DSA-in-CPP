#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int startrow = 0, endrow = mat.size() - 1;
        int startcol = 0, endcol = mat[0].size() - 1;
        int count = 0, total_elements = mat.size() * mat[0].size();

        while (count < total_elements) {
            // 1. Print first row (left to right)
            for (int i = startcol; i <= endcol; i++) {
                ans.push_back(mat[startrow][i]);
                count++;
            }
            startrow++;  // Move the start row down

            // 2. Print end column (top to bottom)
            for (int i = startrow; i <= endrow; i++) {
                ans.push_back(mat[i][endcol]);
                count++;
            }
            endcol--;  // Move the end column left

            // 3. Print end row (right to left)
            for (int i = endcol; i >= startcol; i--) {
                ans.push_back(mat[endrow][i]);
                count++;
            }
            endrow--;  // Move the end row up

            // 4. Print start column (bottom to top)
            for (int i = endrow; i >= startrow; i--) {
                ans.push_back(mat[i][startcol]);
                count++;
            }
            startcol++;  // Move the start column right
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
