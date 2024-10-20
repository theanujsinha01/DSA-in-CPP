#include <iostream>
using namespace std;

void multiplyMatrices(int Mat1[10][10], int Mat2[10][10], int resultMat[10][10], int r1, int c1, int r2, int c2) {

    // Initializing result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            resultMat[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                resultMat[i][j] =  resultMat[i][j] + Mat1[i][k] * Mat2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    int Mat1[10][10], Mat2[10][10], resultMat[10][10];

    // Input dimensions of the matrices
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Input first matrix
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> Mat1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >>Mat2[i][j];
        }
    }

    multiplyMatrices(Mat1, Mat2, resultMat, r1, c1, r2, c2);

    // Output the result matrix
    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << resultMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
