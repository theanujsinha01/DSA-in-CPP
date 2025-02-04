#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int left = 0, right = mat[0].size();
    int top = 0, bottom = mat.size();
    int count = 0, total_elements = mat.size() * mat[0].size();

    while (count < total_elements) {
        
        for (int i = left; i < right && count < total_elements; i++) {
            ans.push_back(mat[top][i]);
            count++;
        }
        top++;  

        for (int i = top; i < bottom && count < total_elements; i++) {
            ans.push_back(mat[i][right - 1]);
            count++;
        }
        right--;  

        for (int i = right - 1; i >= left && count < total_elements; i--) {
            ans.push_back(mat[bottom - 1][i]);
            count++;
        }
        bottom--;  

        for (int i = bottom - 1; i >= top && count < total_elements; i--) {
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

