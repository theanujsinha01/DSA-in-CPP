#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>& arr) {
    int n = arr.size();
    vector<int>temp(n);  // Temporary array to store rearranged numbers
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[index++] = arr[i];
        }
    }

    // Copy temp array back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    return arr;
}
int main() {
    vector<int> arr = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    vector<int> ans = rearrange(arr);

    cout << "Array after rearranging: ";
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(n), where n is the size of the array.
