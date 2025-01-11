#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    map<int, int> freq;
    for (int x : arr) freq[x]++;
    
    int mostFrequent = arr[0];
    for (auto p : freq) {
        if (p.second > freq[mostFrequent]) {
            mostFrequent = p.first;
        }
    }
    cout << "Most frequent element: " << mostFrequent;
    return 0;
}
