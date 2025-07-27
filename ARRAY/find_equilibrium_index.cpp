#include <bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int left = 0, right = 0;

        // calculate left sum
        int l = 0, r = n - 1;
        while (l < i) left += arr[l++];

        // calculate right sum
        while (r > i) right += arr[r--];

        if (left == right)
            return i;
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 3}; // Even size
    int index = findEquilibriumIndex(arr);

    if (index != -1)
        cout << "Equilibrium index is: " << index;
    else
        cout << "No equilibrium index found";

    return 0;
}
