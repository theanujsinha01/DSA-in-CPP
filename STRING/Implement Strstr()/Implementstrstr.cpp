#include <bits/stdc++.h>
using namespace std;

int myStrStr(string& haystack, string& needle) {
    int n = haystack.size(), m = needle.size();
    for (int i = 0; i <= n - m; i++) 
        if (haystack.substr(i, m) == needle) return i;
    return -1;
}

int main() {
    string haystack, needle;
    cin >> haystack >> needle;
    cout << myStrStr(haystack, needle) << endl;
}
// Time Complexity: O(n * m), where n is the length of haystack and m is the length of needle. The substring function takes O(m) time, and we check it for each character in haystack.
// Space Complexity: O(1), as we are not using any additional space that grows with the input size.