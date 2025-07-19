#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> arr) {
    int low = 0, high = arr.size() - 1;

    while(low < high) {
        int mid = (low + high) / 2;

        if(arr[mid] < arr[high]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return arr[low];
}

int main() {
    vector<int>arr = {6, 7, 0, 1, 2, 3, 4, 5};  // Rotated sorted array
    int minVal = findMin(arr);
    cout << "Minimum value in rotated sorted array is: " << minVal << endl;

    return 0;
}
