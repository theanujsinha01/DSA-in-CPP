#include <bits/stdc++.h>
using namespace std;

void printSubstrings(const string &str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cout << str.substr(i, j - i) << endl;
        }
    }
}

int main() {
    string str = "abc";  // Input string
    printSubstrings(str);
    return 0;
}
// time complexity: O(n^2)
// space complexity: O(1)
