#include <bits/stdc++.h>
using namespace std;

vector<int> findAllDuplicates(vector<int> arr) {
   
    unordered_set<int> duplicates;
    vector<int> result;
    for(int i = 0; i < arr.size(); i++) {
    
        if(duplicates.count(arr[i]) == 1) {
            result.push_back(arr[i]);
        }
        else {
            duplicates.insert(arr[i]);
        }

    }

    return result;
}

int main() {
    vector<int>arr = {3, 5, 6, 3, 2, 7, 8, 2, 6};
    vector<int> duplicates = findAllDuplicates(arr);
    for(int num : duplicates) {
        cout << num << " ";
    }

    return 0;
}
