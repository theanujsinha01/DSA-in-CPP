#include <bits/stdc++.h>
using namespace std;

int largestEle(vector<int>& arr) {
    int n = arr.size();
    int largest = arr[0]; // store min value

    // Loop to find the largest element
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Largest element: " << largestEle(arr) << endl;
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1).
