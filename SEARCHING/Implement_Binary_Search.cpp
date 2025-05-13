#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1; 

    while (left <= right) {
        int mid = (left + right) / 2; 

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    vector<int>arr = {5, 2, 9, 1, 5, 6};
    int target = 5;
    sort(arr.begin(), arr.end());
    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
// time complexity: O(log n) where n is the size of the array
// space complexity: O(1) as we are using only a few variables for calculations
