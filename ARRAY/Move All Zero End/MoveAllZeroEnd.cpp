#include <bits/stdc++.h>
using namespace std;

 vector<int>MoveAllZeroEnd(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
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
   vector<int> arr = {0, 0, 8, 4, 0, 0, 2, 7, 0, 6, 0};
   vector<int>ans =  MoveAllZeroEnd(arr);

    cout << "Array after rearranging: ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(n), where n is the size of the array.
