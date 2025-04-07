#include <bits/stdc++.h>
using namespace std;

map<int, int> countFrequency(vector<int>& arr) {
    map<int, int> freq;
    for (auto x : arr) freq[x]++;
    return freq;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    map<int, int> ans = countFrequency(arr);
    cout << "Frequency of each element:\n";
    for (auto p : ans) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}
