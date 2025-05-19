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

//...............................................................................
// pseudo code


// Start

// Input: matrices A and B, with sizes r1 x c1 and r2 x c2 respectively

// Step 1: Check if multiplication is possible
// If c1 != r2:
//     Print "Can't multiply!"
//     Return or exit

// Step 2: Initialize result matrix C of size r1 x c2 with all zeros

// Step 3: Multiply matrices
// For i = 0 to r1 - 1:
//     For j = 0 to c2 - 1:
//         For k = 0 to c1 - 1:
//             C[i][j] = C[i][j] + A[i][k] * B[k][j]

// Step 4: Return or print matrix C

// End
//...............................................................................
