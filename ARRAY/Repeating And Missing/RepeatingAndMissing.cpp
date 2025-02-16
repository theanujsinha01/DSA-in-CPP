#include <bits/stdc++.h>
using namespace std;

void findRepeatingAndMissing(int arr[], int n) {
     map<int, int> freq;  // Hashmap to store frequencies

    // Count frequencies of elements in the array
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    int missing = 0, repeating = 0;
    
    // Check each number from 1 to n
    for (int i = 1; i <= n; i++) {
        if (freq.count(i) == 0) {
            missing = i;  // Missing number
        } else if (freq[i] > 1) {
            repeating = i;  // Repeating number
        }
    }

    cout << "Repeating element: " << repeating << endl;
    cout << "Missing element: " << missing << endl;
}

int main() {
    int arr[] = {1, 2, 2, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);

    findRepeatingAndMissing(arr, n);

    return 0;
}
