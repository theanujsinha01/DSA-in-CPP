#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B, int r1, int c1, int c2) {

    vector<vector<int>> C(r1, vector<int>(c2, 0));
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];

    return C;
}

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (c1 != r2) {
        cout << "Can't multiply!\n";
        return 0;
    }

    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));

    vector<vector<int>> ans = multiply(A, B, r1, c1, c2);

    for (auto row : ans) {
        for (int val : row)
            cout << val << " ";
        cout << "\n";
    }
    return 0;
}
// time complexity: O(n^3)
// space complexity: O(n^2)
