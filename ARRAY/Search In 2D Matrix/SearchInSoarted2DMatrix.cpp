#include <iostream>
using namespace std;

bool searchSortedMatrix(int matrix[10][10], int rows, int cols, int target) {
    int i = 0;           // Start from the first row
    int j = cols - 1;     // Start from the last column

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            return true;  // Element found
        } else if (matrix[i][j] > target) {
            j--;  // Move left if current element is larger
        } else {
            i++;  // Move down if current element is smaller
        }
    }

    return false;  // Element not found
}

int main() {
    int rows, cols, target;

    // Input dimensions and target element
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];

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
