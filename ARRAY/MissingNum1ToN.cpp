#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int>&arr) {

    int n = arr.size() + 1; 
    int expectedSum = (n * (n + 1)) / 2;

    // Calculate the actual sum of the elements in the array
    int actualSum = 0;
    for (int i = 0; i < arr.size(); i++) { 
        actualSum =  actualSum + arr[i];
    }
    return expectedSum - actualSum;
}

int main() {
    vector<int>arr = {1, 2, 4, 5, 6}; // Missing number is 3
    int missingNumber = findMissingNumber(arr);
    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1).