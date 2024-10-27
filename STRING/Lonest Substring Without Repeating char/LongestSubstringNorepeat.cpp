#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(const string& s) {
    unordered_set<char> charSet; 
    int maxLength = 0;
    int left = 0; // Left index of the current substring

    for (int right = 0; right < s.length(); right++) {
        // If the character is already in the set, remove characters from the left
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]); // Remove the left character from the set
            left++; // Move the left index to the right
        }
        
        // Add the current character to the set
        charSet.insert(s[right]);
        // Update the maximum length
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int result = lengthOfLongestSubstring(str);
    cout << "The length of the longest substring without repeating characters is: " << result << endl;

    return 0;
}
