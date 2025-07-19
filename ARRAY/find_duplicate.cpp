#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>arr) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                return arr[i];  // return first duplicate
            }
        }
    }
    return -1;  // if no duplicate found
}

int main() {
    vector<int>arr = {5, 3, 1, 4, 2, 3};  // 3 is duplicate
    int duplicate = findDuplicate(arr);

    if(duplicate != -1)
        cout << "Duplicate number is: " << duplicate << endl;
    else
        cout << "No duplicate found." << endl;

    return 0;
}
