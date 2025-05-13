#include <bits/stdc++.h>
using namespace std;

int largestEle(vector<int>& arr) {
    int n = arr.size();
    int largest = arr[0]; // store min value

    // Loop to find the largest element
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int SmallestEle(vector<int>& arr) {
    int n = arr.size();
    int smallest = arr[0]; // store min value

    // Loop to find the smallest element
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int largest = largestEle(arr);
    int smallest = SmallestEle(arr);
    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1).
