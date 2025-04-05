#include <bits/stdc++.h>
using namespace std;

void printDiagonals(vector<vector<int>>& matrix) {
    int n = matrix.size();

    cout << "Primary Diagonal: ";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary Diagonal: ";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][n - 1 - i] << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printDiagonals(matrix);
    return 0;
}
// time complexity: O(n)
// space complexity: O(1)

