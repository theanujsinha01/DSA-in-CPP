#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;

    while(start < end) {
        swap(arr[start], arr[end]);  
        start++;
        end--;
    }
    return arr;  // Return the reversed array
}

int main() {

    vector<int>arr = {1, 2, 3, 4, 5};
    vector<int>ans =  reverseArray(arr);

    cout << "Reversed array: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
