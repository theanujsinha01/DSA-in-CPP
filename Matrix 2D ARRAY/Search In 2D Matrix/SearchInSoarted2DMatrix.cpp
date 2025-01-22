#include <bits/stdc++.h>
using namespace std;

bool searchSortedMatrix(vector<vector<int>>& matrix,int rows,int cols, int target) {
      for(int i=0;i<rows;i++){
        if(binary_search(matrix[i].begin(),matrix[i].end(),target)){
            return true;
        }
      }
    return false;  // Element not found
}

int main() {
    int rows, cols, target;

    // Input dimensions and target element
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input matrix elements
    cout << "Enter sorted matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> target;

    // Search for the element in the matrix
    if (searchSortedMatrix(matrix, rows, cols, target)) {
        cout << "Element found in the matrix.\n";
    } else {
        cout << "Element not found in the matrix.\n";
    }

    return 0;
}
