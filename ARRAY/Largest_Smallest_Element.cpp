#include <bits/stdc++.h>
using namespace std;

int largestEle(vector<int>& arr) {
    int n = arr.size();
    int largest = arr[0]; 

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

/*---------------------------------------------------------------------------------
Pseudo code

Start

Input: array arr

Function largestEle:
    Set largest = arr[0]
    For i = 1 to arr.size() - 1:
        If arr[i] > largest:
            largest = arr[i]
    Return largest

Function SmallestEle:
    Set smallest = arr[0]
    For i = 1 to arr.size() - 1:
        If arr[i] < smallest:
            smallest = arr[i]
    Return smallest

In main: 
    Call largestEle(arr) 
    Call SmallestEle(arr) 
    Print smallest
    Print largest

End
----------------------------------------------------------------------------------
*/