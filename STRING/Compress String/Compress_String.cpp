#include <bits/stdc++.h>
using namespace std;

string compressString(const string &str) {
    for (auto ch : str) {  // Convert all characters to lowercase
        ch = tolower(ch);
    }

    unordered_map<char, int> mp;  // Your logic: Count character frequencies
    for (char ch : str) {
        mp[ch]++;
    }

    string ans = "";
    for (auto ch : str) {  // Maintain original order
        if (mp[ch] > 0) {  // Avoid duplicates
            ans += to_string(mp[ch]) + ch;
            mp.erase(ch);  // Remove character from map
        }
    }

    return ans;
}

int main() {
    string str = "aabbbcccc";
    cout << "Compressed String: " << compressString(str) << endl;
    return 0;
}
