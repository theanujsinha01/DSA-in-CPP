#include <bits/stdc++.h> // Include this for max_element
using namespace std;

int main() {
    int matrix[3][3] = {
        {3, 8, 2},
        {5, 1, 7},
        {4, 9, 6}
    };

    int max_value = matrix[0][0];

    for (int i = 0; i < 3; i++) {
        // Find the maximum value in the current row and compare it with max_value
        int row_max = *max_element(matrix[i], matrix[i] + 3);
        if (row_max > max_value) {
            max_value = row_max;
        }
    }

    cout << "The maximum value is: " << max_value << endl;

    return 0;
}
