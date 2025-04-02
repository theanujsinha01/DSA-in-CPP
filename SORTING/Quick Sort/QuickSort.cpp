#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[left]; // Choosing the first element as pivot
    int i = left;
    int j = right;
    while(i<j){
        while(arr[i]<=pivot && i<right){
            i++;
        }
        while(arr[j]>pivot && j>left){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[left],arr[j]);
    return j;
}
 
vector<int> quickSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int pi = partition(arr, left, right); // Partitioning index
        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
    return arr;
}

int main() {
    
    vector<int> arr = {10, 6, 11, 9, 7};
    vector<int> ans = quickSort(arr, 0, arr.size() - 1);
    for (auto it : ans) cout << it << " ";
    return 0;
}
// Time Complexity: O(n log n) on average, O(n^2) in the worst case (when the array is already sorted or reverse sorted). The average case occurs when the pivot divides the array into two roughly equal halves at each step, leading to logarithmic depth of recursion. The worst case occurs when the pivot is always the smallest or largest element, leading to linear depth of recursion.
// Space Complexity: O(log n) for the recursive stack space in the average case, O(n) in the worst case. The space complexity is determined by the depth of the recursion stack, which can go up to log n in the average case and n in the worst case.
