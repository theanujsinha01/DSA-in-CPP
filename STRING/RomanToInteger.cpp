#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
                                   {'C', 100}, {'D', 500}, {'M', 1000}};
    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i < s.size() - 1 && mp[s[i]] < mp[s[i + 1]]) 
            total = total - mp[s[i]];
        else 
            total = total + mp[s[i]];
    }
    return total;
}

int main() {
    string s;
    cout << "Enter Roman numeral: ";
    cin >> s;
    cout << "Integer value: " << romanToInt(s) << endl;
    return 0;
}

// time complexity: O(n)
// space complexity: O(1)