#include <bits/stdc++.h>
using namespace std;

int subarraySumEqualsK(vector<int>& nums, int k) {
     int count=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int subarr =0;
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
    cout << "Number of subarrays with sum " << K << " is: " << subarraySumEqualsK(nums, K) << endl;
    return 0;
}
