#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length()) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";
    cout << (areAnagrams(str1, str2) ? "Anagrams" : "Not Anagrams") << endl;
    return 0;
}
// Time Complexity: O(n log n), where n is the length of the strings. Sorting takes O(n log n) time.
// Space Complexity: O(1), if we consider the space used by the sorting algorithm to be constant. However, if we consider the space used by the input strings, it would be O(n).
