#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int n) {
    // Calculate the expected sum of numbers from 1 to n
    int expectedSum = (n * (n + 1)) / 2;

    // Calculate the actual sum of the elements in the array
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) { 
        actualSum =  actualSum + arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // Missing number is 3
    int n = 5 + 1; 

    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
