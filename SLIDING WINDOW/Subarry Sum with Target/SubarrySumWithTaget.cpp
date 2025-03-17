#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>& arr, int target) {
    int left = 0, sum = 0;
    vector<int> result;

    for (int right = 0; right < arr.size(); right++) {  
        sum += arr[right];  

        while (sum > target && left <= right) {  
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            return {left + 1, right + 1};  
        }
    }

    return {-1, -1};  
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;
    
    vector<int> result = subarraySum(arr, target);
    
    for (int num : result) {
        cout << num << " ";
    }
}
