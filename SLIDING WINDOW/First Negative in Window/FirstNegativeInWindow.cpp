#include <bits/stdc++.h>
using namespace std;

vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
    int start = 0;
    int end = start + k - 1;  
    vector<int> ans;

    while (end < arr.size()) {  
        bool found = false;
        for (int i = start; i <= end; i++) {
            if (arr[i] < 0) {
                ans.push_back(arr[i]);
                found = true;
                break;
            }
        }
        if (!found) ans.push_back(0); 
        
        start++;
        end++;
    }
    return ans;
}

int main() {
    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;
    
    vector<int> result = FirstNegativeInteger(arr, k);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
