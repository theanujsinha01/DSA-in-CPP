#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(vector<int> arr) {

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        largest = max(largest, arr[i]);
    }
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != largest) {
            secondLargest = max(secondLargest, arr[i]);
        }
    }
    return secondLargest;
}

int findSecondSmallest(vector<int> arr) {

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for(int i = 0; i < arr.size(); i++) {
        smallest = min(smallest, arr[i]);
    }
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != smallest) {
            secondSmallest = min(secondSmallest, arr[i]);
        }
    }
    return secondSmallest;
}

int main() {
    vector<int>arr = {5, 1, 9, 3, 6, 2};  // Example array
    
    int secondMax = findSecondLargest(arr);
    int secondMin = findSecondSmallest(arr);
    cout << "Second Largest: " << secondMax << endl;
    cout << "Second Smallest: " << secondMin << endl;
    return 0;
}

