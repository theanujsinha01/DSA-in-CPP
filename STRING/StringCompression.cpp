#include <bits/stdc++.h>
using namespace std;

string compress(vector<char>& str) {
    map<char, int> freq;
    for (char ch : str) freq[ch]++;

    string result;
    for (auto it : freq) {
        result += it.first;
        if (it.second > 1) result += to_string(it.second);
    }
    return result;
}
int main() {
    vector<char> str = {'a', 'a', 'b', 'b', 'c', 'c', 'e', 'e'};
    string compressedStr = compress(str);
    cout << "Compressed string: " << compressedStr << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(n)