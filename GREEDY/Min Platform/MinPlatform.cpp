#include <bits/stdc++.h>
using namespace std;

int findPlatform(vector<int>& arr, vector<int>& dep) {
    int ans = 1; // Start with 1 platform for the first train
    int n = arr.size();
    int platform = 1;
    
    sort(dep.begin(), dep.end());
    sort(arr.begin(), arr.end());
    
    int i = 1, j = 0;
    
    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            platform++;
            i++;
        } else {
            platform--;
            j++;
        }
        ans = max(ans, platform); // Update maximum platforms needed
    }
    return ans;
}

    
int main() {

    vector<int>arr = {1000, 1110, 1030, 1130};
    vector<int>dep = {1100, 1130, 1300, 1230};

    int ans = findPlatform(arr, dep);
   
    cout << "Min Platform required  : "<<ans;
 
}
