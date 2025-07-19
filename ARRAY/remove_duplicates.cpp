#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    set<int> seen;
    int index = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(seen.count(arr[i]) == 0) {
            // Not found in set → it's unique
            seen.insert(arr[i]);
            arr[index] = arr[i];
            index++;
        }
    }

    return index;  
}

int main() {
    vector<int>arr = {4, 2, 1, 1, 3, 2, 4, 5};
    int newSize = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
