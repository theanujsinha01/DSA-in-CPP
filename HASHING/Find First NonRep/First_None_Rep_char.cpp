#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "wswiss";
    map<char, int> freq;
    for (char c : str) freq[c]++;
    for (char c : str) {
        if (freq[c] == 1) {
            cout << c;
            break;
        }
    }
    return 0;
}
