#include <bits/stdc++.h>
using namespace std;

vector<int> moveZerosToEnd(vector<int>& arr) {
    int index = 0;  // Index to place non-zero elements

    // Move all non-zero elements to the front
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the rest with 0s
    while (index < arr.size()) {
        arr[index++] = 0;
    }
    return arr;
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    vector<int> result = moveZerosToEnd(arr);

    cout << "After moving zeros: ";
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}
