#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(int nums1[], int n1, int nums2[], int n2) {
    unordered_map<int, int> map;
        
    // Count frequency of each element in nums1
    for (int i = 0; i < n1; i++) {
        map[nums1[i]]++;
    }

    vector<int> res;
    
    // Iterate over nums2 and use the map to check for intersections
    for (int i = 0; i < n2; i++) {
        if (map[nums2[i]] > 0) {
            res.push_back(nums2[i]);
            map[nums2[i]]--;  // Decrease count to handle duplicates
        }
    }

    return res;
}

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> ans = findIntersection(arr1, n1, arr2, n2);
    cout << "Intersection of two arrays: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
