#include <bits/stdc++.h>
using namespace std;

void sortMatrix(vector<vector<int>>& mat) {
    vector<int> temp;
    int rows = mat.size();
    int cols = mat[0].size();
    
    // Flatten the matrix into a single array
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
}

int main() {
    vector<vector<int>> mat = {
        {5, 1, 7},
        {9, 3, 8},
        {2, 4, 6}
    };

    sortMatrix(mat);
    
    cout << "Sorted Matrix:\n";
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
