#include <bits/stdc++.h>
using namespace std;

void findRepeatingAndMissing(vector<int>& arr) {
    int n = arr.size();
    map<int, int> freq;  

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    int missing = 0, repeating = 0;
    
    // Check each number from 1 to n
    for (int i = 1; i <= n; i++) {
        if (freq.count(i) == 0) {
            missing = i;  // Missing number
        }
        if (freq[i] > 1) {
            repeating = i;  // Repeating number
        }
    }
    cout << "Repeating element: " << repeating << endl;
    cout << "Missing element: " << missing << endl;
}

int main() {
    vector<int>arr = {1, 2, 2, 4};  
    findRepeatingAndMissing(arr);
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(n), where n is the size of the array.
