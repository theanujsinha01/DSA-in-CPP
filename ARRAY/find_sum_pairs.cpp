#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findPairsWithSum(vector<int>arr, int target) {
    
    vector<vector<int>> pairs;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j <arr.size(); j++) {
            if(arr[i] + arr[j] == target) {
                pairs.push_back({arr[i], arr[j]});
            }
        }
    }
    return pairs;
}

int main() {
    vector<int>arr = {2, 4, 3, 5, 6, 1};
    int target = 7;

    vector<vector<int>> result = findPairsWithSum(arr, target);
    cout << "Pairs with sum " << target << " are: " << endl;
    for(auto pair : result) {
       for(int num : pair) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
