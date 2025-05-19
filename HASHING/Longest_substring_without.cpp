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
// time complexity: O(n)
// space complexity: O(1) for the frequency map (limited to 256 characters)

//...............................................................................
// Pseudocode to find longest substring without repeating characters

// Start

// Input: string s
// Output: length of longest substring with all unique characters

// Create empty map freq to store char counts
// Initialize left = 0, maxLength = 0

// For right from 0 to length of s - 1:
//    Increase freq[s[right]] by 1
//    While freq[s[right]] > 1:
//       Decrease freq[s[left]] by 1
//       Increase left by 1
//    Update maxLength = max(maxLength, right - left + 1)

// Return maxLength

// End
//...............................................................................
