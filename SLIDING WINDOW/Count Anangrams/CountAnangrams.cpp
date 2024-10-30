#include <bits/stdc++.h>
using namespace std;

int countAnagrams(string txt, string pat) {
    int K = pat.size();  
    int N = txt.size(); 

    if (K > N) return 0;  

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

 
        if (right - left + 1 < K) {
            right++;
        }
      
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
            left++;  
            right++;  
        }
    }

    return count;  
}

int main() {
    string txt = "abccbabce";
    string pat = "abc";
    int result = countAnagrams(txt, pat);
    cout << "Number of anagram occurrences: " << result << endl;
    return 0;
}
