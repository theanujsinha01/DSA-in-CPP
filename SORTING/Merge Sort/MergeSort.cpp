#include <bits/stdc++.h>
using namespace std;

vector<int>merge(vector<int>& arr, int start, int end) {
    // Merge two sorted halves of the array
    vector<int> output;
    int mid = (start + end) / 2; 
    int i = start, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]){
            output.push_back(arr[i++]);
        }
        else{
            output.push_back(arr[j++]);
        } 
    }

    while (i <= mid) output.push_back(arr[i++]);
    while (j <= end) output.push_back(arr[j++]);
    for(int i = 0; i < output.size(); i++) {
        arr[start + i] = output[i]; 
    }; 
    return arr; 
}

vector<int> mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, end);
    }
    return arr;
}

int main() {
    
    vector<int> arr = {10,6,11,9,7};
    vector<int> ans = mergeSort(arr, 0, arr.size() - 1);
 
    for (auto it : ans) cout << it << " ";
    return 0;
}
// Time Complexity: O(n log n), where n is the number of elements in the array. The algorithm divides the array into halves and merges them, leading to a logarithmic number of levels of recursion, each requiring linear time to merge.
// Space Complexity: O(n), where n is the number of elements in the array. The algorithm uses an auxiliary array to store the merged result, which requires additional space proportional to the size of the input array.
