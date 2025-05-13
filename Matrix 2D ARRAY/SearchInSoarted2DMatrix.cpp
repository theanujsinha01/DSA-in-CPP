#include <bits/stdc++.h>
using namespace std;

bool searchSortedMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
      for(int i=0;i<rows;i++){
        if(binary_search(matrix[i].begin(),matrix[i].end(),target)){
            return true;
        }
      }
    return false;  // Element not found
}

int main() {
    
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int target = 79; 
    bool ans = searchSortedMatrix(matrix, target);
    if (ans == true) {
        cout << "Element found in the matrix.\n";
    } else {
        cout << "Element not found in the matrix.\n";
    }
    return 0;
}
// // time complexity: O(nlogn)
// // space complexity: O(1)
