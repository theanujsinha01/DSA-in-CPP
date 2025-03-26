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
int main() {
    vector<int>arr = {1, 2, 3, 4, 5};
    cout << "Second largest element: " << secondMax(arr) << endl;
    return 0;
}

