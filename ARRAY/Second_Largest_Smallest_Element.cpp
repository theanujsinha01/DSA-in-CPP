#include <bits/stdc++.h>
using namespace std;

int secondMax(vector<int>&arr){
    int ans = INT_MIN;
    int mx = arr[0];
    for(int i = 1; i < arr.size(); i++){
        mx = max(mx, arr[i]);
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != mx){
            ans = max(ans, arr[i]);
        }
    }
    return ans;
}
int secondMin(vector<int>&arr){
    int ans = INT_MAX;
    int mn = arr[0];
    for(int i = 1; i < arr.size(); i++){
        mn = min(mn, arr[i]);
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != mn){
            ans = min(ans, arr[i]);
        }
    }
    return ans;
}
int main() {
    vector<int>arr = {1, 2, 3, 4, 5};
    int secondMax = secondMax(arr);
    int secondMin = secondMin(arr);
    cout << "Second smallest element: " << secondMin << endl;
    cout << "Second largest element: " << secondMax << endl;
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1).

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr with n elements

// Function secondMax:
//     Set mx = arr[0]
//     For i = 1 to n-1:
//         mx = max(mx, arr[i])
//     Set ans = very small number (like INT_MIN)
//     For i = 0 to n-1:
//         If arr[i] != mx:
//             ans = max(ans, arr[i])
//     Return ans

// Function secondMin:
//     Set mn = arr[0]
//     For i = 1 to n-1:
//         mn = min(mn, arr[i])
//     Set ans = very large number (like INT_MAX)
//     For i = 0 to n-1:
//         If arr[i] != mn:
//             ans = min(ans, arr[i])
//     Return ans

// In main:
//     Input arr = {1, 2, 3, 4, 5}
//     Call secondMax(arr) → secondMax
//     Call secondMin(arr) → secondMin
//     Print secondMin and secondMax

// End
// ----------------------------------------------------------------------------------
