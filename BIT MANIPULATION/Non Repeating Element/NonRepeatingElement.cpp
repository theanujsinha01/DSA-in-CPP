#include <bits/stdc++.h>
using namespace std;

// Function to find the only non-repeating element in the array
int findNonRepeatingElement(vector<int>& arr) {
    int n = arr.size();
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i];  // XOR all the elements
    }
    return result;
}

int main() {
    vector<int>v = {2, 3, 5, 4, 5, 3, 4};  // Example array
    int result = findNonRepeatingElement(v);
    cout << "The only non-repeating element is: " << result << endl;
    return 0;
}
//time complexity: O(n)
//space complexity: O(1)
