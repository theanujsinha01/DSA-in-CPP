#include <iostream>
using namespace std;

void findRepeatingAndMissing(int arr[], int n) {
    int sumActual = 0, sumExpected = 0;
    int sumSquaresActual = 0, sumSquaresExpected = 0;

    for (int i = 0; i < n; i++) {
        sumActual += arr[i];
        sumSquaresActual += arr[i] * arr[i];
    }

    sumExpected = n * (n + 1) / 2;
    sumSquaresExpected = (n * (n + 1) * (2 * n + 1)) / 6;

  
    int diffSum = sumExpected - sumActual; 
    int diffSquares = sumSquaresExpected - sumSquaresActual;  

    // Find missing and repeating using simple math
    int missing = ((diffSum + diffSquares) / diffSum) / 2;
    int repeating = missing - diffSum;

   
    cout << "Repeating element: " << repeating << endl;
    cout << "Missing element: " << missing << endl;
}

int main() {
    int arr[] = {1, 2, 2, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);

    findRepeatingAndMissing(arr, n);

    return 0;
}
