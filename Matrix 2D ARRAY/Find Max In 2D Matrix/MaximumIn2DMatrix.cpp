#include <iostream>
using namespace std;

int main() {
   
    int matrix[3][3] = {
        {3, 8, 2},
        {5, 1, 7},
        {4, 9, 6}
    };

   
    int max_value = matrix[0][0];

    // Traverse the matrix to find the maximum value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];  
            }
        }
    }

    cout << "The maximum value is: " << max_value << endl;

    return 0;
}
