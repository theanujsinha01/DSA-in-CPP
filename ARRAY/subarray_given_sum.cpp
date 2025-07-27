#include <bits/stdc++.h>
using namespace std;

vector<int> subarrayWithSum(vector<int>& arr, int targetSum) {
    
    for (int i = 0; i < arr.size(); i++) {
       for(int j = i; j < arr.size(); j++){
            int currentSum = 0;
            for(int k = i; k <= j; k++) {
                currentSum += arr[k];
            }
            if(currentSum == targetSum) {
                return {i,j};
            }
               
        }

    }
    return {-1,-1};
      
}
   

int main() {
    vector<int>arr = {1, 4, 20, 3, 10, 5};
    int targetSum = 33;
    vector<int>ans = subarrayWithSum(arr, targetSum);
    cout << "Subarray with given sum found at indices: " << ans[0] << " to " << ans[1] << endl;

    if(ans[0] == -1) {
        cout << "No subarray with the given sum found." << endl;
        return 0;
    }
    
    for(int i = ans[0]; i <= ans[1]; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
