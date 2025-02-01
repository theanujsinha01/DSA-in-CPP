#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j);  // Update prefix to the common part
        if (prefix == "") return "";  // No common prefix
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
