#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    int target = 5;

    int result = linearSearch(arr, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
// time complexity: O(n) where n is the size of the array
// space complexity: O(1) as we are using only a few variables for calculations
