#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[rows][cols];


    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = i; j < cols; j++) {
           swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Output the transpose
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
