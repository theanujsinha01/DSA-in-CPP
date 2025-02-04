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
