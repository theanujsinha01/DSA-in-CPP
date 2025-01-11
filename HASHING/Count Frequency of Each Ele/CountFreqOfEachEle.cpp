#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    map<int, int> freq;
    for (int x : arr) freq[x]++;
    for (auto p : freq)
    {
        cout << p.first << " " << p.second << endl;
    } 
    return 0;
}
