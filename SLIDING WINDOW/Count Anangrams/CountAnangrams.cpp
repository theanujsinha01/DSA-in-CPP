#include <bits/stdc++.h>
using namespace std;

int countAnagrams(string txt, string pat) {
    int K = pat.size();  // Length of the pattern
    int N = txt.size();  // Length of the text

    if (K > N) return 0;  // If pattern is longer than text, return 0

    unordered_map<char, int> patFreq;  // Frequency map for the pattern
    unordered_map<char, int> windowFreq;  // Frequency map for the current window in txt

    // Fill frequency map for the pattern
    for (char c : pat) {
        patFreq[c]++;
    }

    int left = 0, right = 0;
    int count = 0;  // To count anagram occurrences

    while (right < N) {
        // Add the current character to the window
        windowFreq[txt[right]]++;

        // If the window size is less than K, expand it
        if (right - left + 1 < K) {
            right++;
        }
        // If window size is exactly K
        else if (right - left + 1 == K) {
            // Compare the frequency maps
            if (windowFreq == patFreq) {
                count++;  // An anagram is found
            }

            // Remove the leftmost character from the window
            windowFreq[txt[left]]--;
            if (windowFreq[txt[left]] == 0) {
                windowFreq.erase(txt[left]);  // Remove the character from map if count becomes 0
            }
            left++;  // Slide the window forward
            right++;  // Expand the window
        }
    }

    return count;  // Return the total count of anagrams found
}

int main() {
    string txt = "abbcbabce";
    string pat = "abc";
    int result = countAnagrams(txt, pat);
    cout << "Number of anagram occurrences: " << result << endl;
    return 0;
}
