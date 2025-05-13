#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int>arr, int n) {
    sort(arr.begin(),arr.end()); // Sort the array
    return arr[n / 2];
}
int main() {
    vector<int>arr = {2, 2, 1, 1, 2, 2, 2};
    int n = arr.size();
    int result = findMajorityElement(arr, n);
    cout << "Majority element: " << result << endl;

    return 0;
}