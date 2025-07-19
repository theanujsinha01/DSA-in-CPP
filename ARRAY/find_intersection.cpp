#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> arr1, vector<int> arr2) {
    set<int> s1;
    vector<int> result;

    // Insert all elements of arr1 into set
    for(int i = 0; i < arr1.size(); i++) {
        s1.insert(arr1[i]);
    }

    for(int i = 0; i < arr2.size(); i++) {
        if(s1.count(arr2[i]) == 1) {
            result.push_back(arr2[i]);
        }
    }
    return result; 
}

int main() {
    vector<int>arr1 = {1, 2, 3, 4, 5};
    vector<int>arr2 = {3, 4, 5, 6, 7};
   
    vector<int>ans = findIntersection(arr1, arr2);
    cout << "Intersection of the two arrays is: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
