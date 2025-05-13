#include <bits/stdc++.h>
using namespace std;

int longestSubstringWithoutRepeating(string s) {
    map<char, int> freq;
    int left = 0, maxLength = 0;
    
    for (int right = 0; right < s.length(); right++) {
        freq[s[right]]++;
        
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }
    
    return maxLength;
}

int main() {
    string str = "abcabcbb";
    cout << longestSubstringWithoutRepeating(str);
    return 0;
}
