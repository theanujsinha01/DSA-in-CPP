#include <bits/stdc++.h>
using namespace std;

void subseq(string &s, string res, int i) {
    if (i == s.size()) { cout << res << endl; return; }
    subseq(s, res + s[i], i + 1);
    subseq(s, res, i + 1);
}

int main() {
    string s = "abc";
    subseq(s, "", 0);
}
// // time complexity: O(2^n)
// // space complexity: O(n)
