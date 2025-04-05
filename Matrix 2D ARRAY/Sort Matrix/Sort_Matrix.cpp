#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sortMatrix(vector<vector<int>>& mat) {
    vector<int> temp;
    int rows = mat.size();
    int cols = mat[0].size();
    
    // convert the matrix into a single array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp.push_back(mat[i][j]);
        }
    }
    
    // Sort the array
    sort(temp.begin(), temp.end());
    
    // Fill back the sorted values into the matrix
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = temp[k++];
        }
    }
    return mat; 
}

int main() {
    vector<vector<int>> mat = {
        {5, 1, 7},
        {9, 3, 8},
        {2, 4, 6}
    };

    vector<vector<int>> ans = sortMatrix(mat);
    
    cout << "Sorted Matrix:\n";
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// time complexity: O(n*m*log(n*m))
// space complexity: O(n*m)
