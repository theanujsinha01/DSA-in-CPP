#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start ++;
        end--;
    }
    return arr;
}
int main() {
    vector<int>arr = {1, 2, 3, 4, 5};
    vector<int>ans = reverseArray(arr);

    cout << "Reversed array: ";
    for ( auto it : ans) {
        cout<<it<<" ";
    }
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1).
