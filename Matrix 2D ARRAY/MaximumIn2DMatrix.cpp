#include <bits/stdc++.h>
using namespace std;

int findMax(vector<vector<int>>& matrix) {
    int max_value = INT_MIN; // Initialize to the smallest integer value

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }
    }
    return max_value;
}

int main() {
    vector<vector<int>>matrix = {
        {3, 8, 2},
        {5, 1, 7},
        {4, 9, 6}
    };
    int maxVal = findMax(matrix);
    cout << "Max value: " << maxVal << endl;
    return 0;
}
// time complexity: O(n*m)
// space complexity: O(1)