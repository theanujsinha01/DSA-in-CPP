#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> arr) {
    int n = arr.size() + 1;  // since one number is missing
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
   
    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 9, 10};  // missing 8
    int missing = findMissing(arr);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
