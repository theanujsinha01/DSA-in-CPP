#include <iostream>
using namespace std;

void setMatrixZeroes(int matrix[3][3], int rows, int cols) {
    // Step 1: Find zeroes and mark them
    bool rowZero[3] = {false}; // To mark rows
    bool colZero[3] = {false}; // To mark columns

    // Check the matrix for zeroes
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowZero[i] = true;  // Mark the row
                colZero[j] = true;  // Mark the column
            }
        }
    }

    // Step 2: Set marked rows and columns to zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (rowZero[i] || colZero[j]) {
                matrix[i][j] = 0;  // Set to zero
            }
        }
    }
}

void printMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
   
    int matrix[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix, 3, 3);

    setMatrixZeroes(matrix, 3, 3);  

    cout << "Matrix after setting zeroes:" << endl;
    printMatrix(matrix, 3, 3);

    return 0;
}
