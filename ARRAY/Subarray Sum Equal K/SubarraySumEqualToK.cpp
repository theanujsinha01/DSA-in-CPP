#include <bits/stdc++.h>
using namespace std;

int subarraySumEqualsK(vector<int>& nums, int k) {
    int count=0;
    int n=nums.size();
    for(int i=0; i<n; i++){
        int subarr = 0;
        for(int j=i; j<n; j++){
            subarr = subarr+nums[j];
            if(subarr == k){
                count++;

            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {1, 2, 3,5,6};
    int K = 6;
    int ans = subarraySumEqualsK(nums, K);
    cout << "Number of subarrays with sum equal to " << K << ": " << ans << endl;
    return 0;
}
// Time Complexity: O(N^2)
// Space Complexity: O(1)